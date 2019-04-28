#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#define MAXN 505 //顶点的最大个数 
using namespace std;

struct Edge{
    int v; //顶点 
	int u; //下一个顶点 
    int w; //权值 
    Edge(int v,int u,int w):v(v),u(u),w(w){}
    bool operator < (const Edge &e) const {
        return w>e.w;
    }
};

vector<Edge> adj[MAXN]; //agj[v]：与v相连的边 
vector<Edge> mst; //最小生成树 
priority_queue<Edge> pq; //优先队列，存放横切边 
int vis[MAXN]; //访问标志 

void Prim(); //Prim算法，计算最小生成树 
void visit(int v); //设置访问标志，并将与v相邻结点（未被访问）的边加入优先队列中 

void Prim(){ 
    visit(1);
    while(!pq.empty()){
        Edge e=pq.top();
        pq.pop();
        if(vis[e.v] && vis[e.u]) continue;
        mst.push_back(e);
        if(!vis[e.v]) visit(e.v);
        if(!vis[e.u]) visit(e.u);
    }
}

void visit(int v){ 
    vis[v]=1;
    for(vector<Edge>::iterator i=adj[v].begin(); i!=adj[v].end();i++){
        if(!vis[(*i).u]){
            pq.push(*i);
        }
    }
}

int N;
int n,m;
int v,u,w;

int main(){
	scanf("%d",&N);
	while(N--){
		memset(vis,0,sizeof(vis));
		mst.clear();
		for(int i=0;i<MAXN;i++) adj[i].clear();
		while(!pq.empty()) pq.pop();

		scanf("%d%d",&n,&m);
		while(m--){
			scanf("%d%d%d",&v,&u,&w);
			adj[v].push_back(Edge(v,u,w));
			adj[u].push_back(Edge(u,v,w)); 
		}
		
		int mn=100; //外界供电设备到学校的最短距离 
		for(int i=1;i<=n;i++){
			scanf("%d",&w); 
			if(mn>w) mn=w;
		}
		
		Prim();
	    int ans=0;
	    for(vector<Edge>::iterator i=mst.begin();i!=mst.end();i++){
	    	ans+=(*i).w;
		}
	    printf("%d\n",ans+mn);
	}
    return 0;
}

