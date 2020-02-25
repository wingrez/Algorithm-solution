#include<cstdio>
#include<cstring>

const int MAXN=1005;
int n, m;
char maze[MAXN][MAXN];
int ansfrom[MAXN][MAXN], ans[100005];
int cnt;
int dx[4]= {1, 0, -1, 0};
int dy[4]= {0, 1, 0, -1};

void dfs(int x, int y, int k) {
	ansfrom[x][y]=k;
	cnt++;
	for(int i=0; i<4; ++i) {
		int nx=x+dx[i], ny=y+dy[i];
		if(nx>=0 && nx<n && ny>=0 && ny<n && ansfrom[nx][ny]==-1 && maze[nx][ny]-'0'+maze[x][y]-'0'==1) {
			dfs(nx, ny, k);
		}
	}
}

/**
* 在某一条路径上的所有点的答案是相同的。 
*/
int main() {
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; ++i) {
		scanf("%s", maze[i]);
	}

	int x, y;
	memset(ansfrom, -1, sizeof(ansfrom));
	for(int i=0; i<m; ++i) {
		scanf("%d%d", &x, &y);
		x--; y--;
		if(ansfrom[x][y]==-1) {
			cnt=0;
			dfs(x, y, i);
			ans[i]=cnt;
		}
		printf("%d\n", ans[ansfrom[x][y]]);
	}
	return 0;
}
