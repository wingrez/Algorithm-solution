#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN=25;
bool board[MAXN][MAXN];
long long dp[MAXN][MAXN];
int n,m;
int hn, hm; //马的坐标 

int main(){
	scanf("%d%d%d%d", &n, &m, &hn, &hm);

	//生成马的控制点
	int dy[8]={-2, -2, -1, -1, 1, 1, 2, 2}, 
		dx[8]={-1, 1, -2, 2, -2, 2, -1, 1};
	board[hn][hm]=true;
	for(int i=0;i<8;++i){
		int y=hn+dy[i], x=hm+dx[i];
		if(y>=0 && y<=n && x>=0 && x<=m){
			board[y][x]=true;
		}
	}
	
	//动态规划过程
	dp[0][0]=1;	
	for(int i=0; i<=n; ++i){
		for(int j=0; j<=m ; ++j){
			if(i-1>=0 && board[i-1][j]==false) dp[i][j]+=dp[i-1][j];
			if(j-1>=0 && board[i][j-1]==false) dp[i][j]+=dp[i][j-1];
		}
	} 
	
	printf("%lld\n", dp[n][m]);
	return 0;
}
