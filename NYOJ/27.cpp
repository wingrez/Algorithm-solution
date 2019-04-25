#include<stdio.h>
#include<string.h>
#define MAXN 105

int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};

int map[MAXN][MAXN];
int m,n;

void dfs(int x,int y){
	map[x][y]=-1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0 && nx<m && ny>=0 && ny<=n && map[nx][ny]==1){
			map[nx][ny]==-1;
			dfs(nx,ny);
		}
	}
}

int main(){
	int T;
	scanf("%d\n",&T);
	while(T--){
		int ans=0;
		scanf("%d%d",&m,&n);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&map[i][j]);
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(map[i][j]==1){
					dfs(i,j);
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}

