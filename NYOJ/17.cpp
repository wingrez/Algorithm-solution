#include<stdio.h>
#include<string.h>
#include<algorithm>
#define MAXN 100005
using namespace std;
char str[MAXN];
int dp[MAXN];
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%s",str);
		int len=strlen(str);
		int ans=0;
		for(int i=0;i<len;i++){
			dp[i]=1;
			for(int j=0;j<i;j++){
				if(str[j]<str[i]){
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
			ans=max(ans,dp[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}

