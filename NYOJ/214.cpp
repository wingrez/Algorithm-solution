#include<stdio.h>
#include<string.h>
#include<algorithm>
#define INF 0x3f3f3f3f
#define MAXN 100005
using namespace std;
int num[MAXN];
int pos[MAXN];
int dp[MAXN];//dp[i]：以num[i]结尾的最长上升子序列的长度

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int ans=0;
		int i,j;
		memset(pos,INF,sizeof(pos));
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
			j=lower_bound(pos,pos+n,num[i])-pos;
			dp[i]=j+1;
			pos[j]=num[i];
			ans=max(ans,dp[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}        

