#include<stdio.h>
#include<string.h>
#include<algorithm>
#define MAXN 1005
using namespace std;
int dp[MAXN][MAXN];
int weight[MAXN];
int value[MAXN];
int main(){
	int n,v;
	while(scanf("%d%d",&n,&v) && n){
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++){
			scanf("%d%d",&weight[i],&value[i]);
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=v;j++){
				if(j>=weight[i]){
					dp[i][j]=max(dp[i-1][j], dp[i-1][j-weight[i]]+value[i]);
				}
				else dp[i][j]=dp[i-1][j];
			}
		}
		printf("%d\n",dp[n][v]);
	}
	return 0;
}

