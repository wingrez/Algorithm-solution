#include<stdio.h>
#include<string.h>
#include<vector>
#define MAXN 100000+5
using namespace std;

int n,s;
vector<int> G[MAXN];
int p[MAXN];

void tree(int u,int v){
	G[u].push_back(v);
	G[v].push_back(u);
}

void dfs(int u,int fa){//递归生成u的子树，fa为u的父结点。 
	int d=G[u].size();
	for(int i=0;i<d;i++){
		int v=G[u][i];
		if(v!=fa){
			dfs(v,p[v]=u);
		}
	}
}

int main(){
	int m;
	scanf("%d",&m);
	while(m--){
		for(int i=0;i<MAXN;i++){
			G[i].clear();
		}
		scanf("%d%d",&n,&s);
		int a,b;
		for(int i=0;i<n-1;i++){
			scanf("%d%d",&a,&b);
			tree(a,b);
		}
		p[s]=-1;
		dfs(s,-1);//生成以s为根的树
		for(int i=1;i<=n;i++){
			printf("%d ",p[i]);
		}
		printf("\n");
	}
	return 0;
}


