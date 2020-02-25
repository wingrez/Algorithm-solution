#include<cstdio>

const int MAXN=35;
int n;
int arr[MAXN][MAXN];
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};

void dfs(int x, int y){
	arr[x][y]=-1;
	for(int i=0; i<4; ++i){
		int nx=x+dx[i], ny=y+dy[i];
		if(nx>=0 && nx<=n+1 && ny>=0 && ny<=n+1 && arr[nx][ny]==0){
			dfs(nx, ny);
		}
	}
}

int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j)
		scanf("%d", &arr[i][j]);
	}
	dfs(0, 0);
	
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			if(arr[i][j]==-1) printf("0 ");
			else if(arr[i][j]==0) printf("2 ");
			else printf("1 ");
		}
		printf("\n");
	}
	return 0;
}
