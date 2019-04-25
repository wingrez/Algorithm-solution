#include<cstdio>

const int MAXN=105;

int arr[MAXN][MAXN];
int n;
int dx[4]={1, 0, -1, 0}; //·½Ïò
int dy[4]={0, -1, 0, 1};

int main(){
	scanf("%d",&n);
	int x=0, y=n-1;
	int dir=0;
	for(int i=1;i<=n*n;i++){
		arr[x][y]=i; 
		int nx=x+dx[dir];
		int ny=y+dy[dir];
		if(nx>n-1 || ny>n-1 || nx<0 || ny<0 || arr[nx][ny]!=0){
			dir=(dir+1)%4;	
		}
		x+=dx[dir];
		y+=dy[dir];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
