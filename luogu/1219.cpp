#include<cstdio>
#include<cstring>

int board[15];
int vis[3][30];
int n, cnt;

void search(int row) {
	if(row==n) {
		cnt++;
		if(cnt<=3){
			for(int i=0; i<n; i++) printf("%d ",board[i]+1);
			printf("\n");
		}
	} else for(int i=0; i<n; i++) {
			bool judge=true;
			if(vis[0][i]==0 && vis[1][row+i]==0 && vis[2][row+n-i]==0){
				board[row]=i;
				vis[0][i]=vis[1][row+i]=vis[2][row+n-i]=1;
				search(row+1);
				vis[0][i]=vis[1][row+i]=vis[2][row+n-i]=0;
			}
		}
}

int main() {
	scanf("%d", &n);
	search(0);
	printf("%d\n", cnt);
	return 0;
}
