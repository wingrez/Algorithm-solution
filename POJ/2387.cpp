#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;

const int MAXN=1005; //顶点数
const int INF=0x3f3f3f3f;

struct Dijkstra { //求解单源点最短距离问题。适用有向图，且边的权值为负。
	struct Edge {
		int u; //边的一个顶点
		int v; //边的另一个顶点
		int w; //边的权值
		Edge(int u,int v,int w):u(u),v(v),w(w) {}
		bool operator < (const Edge &e) const {
			return w>e.w;
		}
	};

	struct Dist { //源点当前到点u的距离w
		int u;
		int w;
		Dist(int u,int w):u(u),w(w) {}
		bool operator < (const Dist &d) const {
			return w>d.w;
		}
	};

	vector<Edge> adj[MAXN];
	priority_queue<Dist> pq;
	int distTo[MAXN];
	bool vis[MAXN];

	void dijkstra(int s) {
		distTo[s]=0;
		pq.push(Dist(s,0));
		while(!pq.empty()) {
			int u=pq.top().u; pq.pop();
			if(vis[u]==true) continue;
			relax(u);
		}
	}

	void init() {
		for(int i=0; i<MAXN; i++) adj[i].clear();
		while(!pq.empty()) pq.pop();
		memset(distTo,INF,sizeof(distTo));
		memset(vis,0,sizeof(vis));
	}

	void addEdge(int u, int v, int w) {
		adj[u].push_back(Edge(u,v,w));
	}

	void relax(int u) {
		vis[u]=true;
		for(int i=0; i<adj[u].size(); i++) {
			int v=adj[u][i].v;
			if(distTo[v]>distTo[u]+adj[u][i].w) {
				distTo[v]=distTo[u]+adj[u][i].w;
				pq.push(Dist(v,distTo[v]));
			}
		}
	}

};

Dijkstra dijkstra;
int T,N;

int main() {
	dijkstra.init();
	int u,v,w;
	scanf("%d%d",&T,&N);
	for(int i=0; i<T; i++) {
		scanf("%d%d%d",&u, &v, &w);
		dijkstra.addEdge(u,v,w);
		dijkstra.addEdge(v,u,w);
	}
	dijkstra.dijkstra(1);
	printf("%d\n",dijkstra.distTo[N]);
	return 0;
}

