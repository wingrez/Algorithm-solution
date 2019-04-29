#include<cstdio>

const int MAXN=1005;

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

UnionFind uf;
int N,M;
int u,v;

int main(){
	while(scanf("%d",&N)==1 && N!=0){
		scanf("%d",&M);
		uf.init(N);
		for(int i=0;i<M;i++){
			scanf("%d%d",&u,&v);
			uf.join(u,v);
		}
		printf("%d\n",uf.size-1);
	}
	return 0;
} 
