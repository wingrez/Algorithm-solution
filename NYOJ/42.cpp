#include<stdio.h>
#include<string.h>
#include<vector>
#define MAXN 1005
using namespace std;

int P,Q;
vector<int> G[MAXN];
int vis[MAXN];

int cnt;
int dfs(int u){//检查图的连通性
	vis[u]=1;
	cnt++;
	if(cnt==P) return 1;
	for(vector<int>::iterator i=G[u].begin();i!=G[u].end();i++){
		if(!vis[*i] && dfs(*i)) return 1;
	}
	return 0;
}

int main(){
	int N;
	scanf("%d",&N);
	while(N--){
		scanf("%d%d",&P,&Q);
		for(int i=1;i<=P;i++) G[i].clear();
		memset(vis,0,sizeof(vis));
		cnt=0;
		
		int u,v;
		for(int i=0;i<Q;i++){
			scanf("%d%d",&u,&v);
			G[u].push_back(v);
			G[v].push_back(u);
		}
		int num=0;
		for(int i=1;i<=P;i++){
			if(G[i].size()&1){//对度数为奇数的结点计数 
				num++; 
			}
		}
		if((num==0 || num==2) && dfs(1))
			printf("Yes\n");
		else printf("No\n");
	}
}

