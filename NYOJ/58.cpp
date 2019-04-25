#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
int maze[9][9]={
 1,1,1,1,1,1,1,1,1,
 1,0,0,1,0,0,1,0,1,
 1,0,0,1,1,0,0,0,1,
 1,0,1,0,1,1,0,1,1,
 1,0,0,0,0,1,0,0,1,
 1,1,0,1,0,1,0,0,1,
 1,1,0,1,0,1,0,0,1,
 1,1,0,1,0,0,0,0,1,
 1,1,1,1,1,1,1,1,1,
};
int vis[9][9];
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
int a,b,c,d;

void bfs(){
	queue<int> posx;
	queue<int> posy;
	posx.push(a);
	posy.push(b);
	int x=a,y=b;
	while(x!=c || y!=d){
		posx.pop();
		posy.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx>=1 && nx<8 && ny>=1 && ny<8 && !maze[nx][ny] && !vis[nx][ny]){
				vis[nx][ny]=vis[x][y]+1;
				posx.push(nx);
				posy.push(ny);
			}
		}
		x=posx.front();
		y=posy.front();
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		memset(vis,0,sizeof(vis));
		scanf("%d%d%d%d",&a,&b,&c,&d);
		bfs();
		printf("%d\n",vis[c][d]);
	}
	return 0;
}

