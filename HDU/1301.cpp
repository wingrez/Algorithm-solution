#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;

const int MAXN=30; //顶点数 

struct Edge{ 
    int u; //边的一个顶点
	int v; //边的另一个顶点 
    int w; //边的权值 
    Edge(int u,int v,int w):u(u),v(v),w(w){}
    bool operator < (const Edge &e) const {
        return w>e.w;
    }
};

struct Prim{
	vector<Edge> adj[MAXN]; //agj[v]：与v相连的边 
	priority_queue<Edge> pq; //优先队列，存放横切边 
	vector<Edge> mst; //最小生成树 
	bool vis[MAXN]; //访问标志
	
	void prim(int s){ //从起点s开始 
		visit(s); 
	    while(!pq.empty()){
	        Edge e=pq.top();
	        pq.pop();
	        if(vis[e.u] && vis[e.v]) continue;
	        mst.push_back(e);
	        if(!vis[e.u]) visit(e.u);
	        if(!vis[e.v]) visit(e.v);
	    }
	}
	
	void init(){ //初始化 
		for(int i=0;i<MAXN;i++) adj[i].clear();
		while(!pq.empty()) pq.pop();
		mst.clear();
		memset(vis,0,sizeof(vis));
	}
	
	void addEdge(int u,int v,int w){
		adj[u].push_back(Edge(u,v,w));
	}
	
	void visit(int u){ //设置访问标志，并将与v相邻结点（未被访问）的边加入优先队列中
	    vis[u]=true;
	    for(vector<Edge>::iterator i=adj[u].begin(); i!=adj[u].end();i++)
	        if(!vis[(*i).v]) pq.push(*i);
	}
};

Prim prim;

int n; //村庄数
int k; //道路数
char lab[5]; //村庄的标签 

int main(){
	while(scanf("%d",&n)==1 && n!=0){
		prim.init();
		for(int i=0;i<n-1;i++){
			scanf("%s%d",lab,&k);
			int u,v,w;
			u=lab[0]-'A';
			for(int j=0;j<k;j++){
				scanf("%s%d",lab,&w);
				v=lab[0]-'A';
				prim.addEdge(u,v,w);
				prim.addEdge(v,u,w);
			}
		}
		
		prim.prim(0);
			
		int ans=0;
		for(int i=0;i<prim.mst.size();i++){
			ans+=prim.mst[i].w;
		}
		
		printf("%d\n",ans);
	}
	return 0;
} 
