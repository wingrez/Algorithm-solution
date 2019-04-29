#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;

const int MAXN=105;

struct UnionFind{
	int ufset[MAXN];
	int size; //连通分量个数 
	
	int init(int N){ //N为节点数 
		size=N;
		for(int i=1;i<=N;i++){ //节点标号从1开始 
			ufset[i]=i;
		}
	}

	int find(int v){
		while(v!=ufset[v]) v=ufset[v];
		return v;
	}
	
	void join(int v,int u){
		int ra=find(v);
		int rb=find(u);
		if(ra==rb) return;
		ufset[ra]=rb;
		size--; 
	}
};

struct Edge{ 
    int u; //边的一个顶点
	int v; //边的另一个顶点 
    int w; //边的权值 
    Edge(int u,int v,int w):u(u),v(v),w(w){}
    bool operator < (const Edge &e) const {
        return w>e.w;
    }
};

struct Prim{ //Prim算法，计算最小生成树，适用有向或无向图 
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

UnionFind uf;
Prim prim;
int N,M;
int u,v,w;

int main(){
	while(scanf("%d%d",&N,&M)==2 && N){
		uf.init(M);
		prim.init();
		for(int i=0;i<N;i++){
			scanf("%d%d%d",&u,&v,&w);
			prim.addEdge(u,v,w);
			prim.addEdge(v,u,w);
			uf.join(u,v);
		}
		if(uf.size!=1) printf("?\n");
		else {
			int ans=0;
			prim.prim(1);
			for(int i=0;i<prim.mst.size();i++){
				ans+=prim.mst[i].w;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
