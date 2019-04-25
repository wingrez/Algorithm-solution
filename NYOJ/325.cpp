#include<stdio.h>
#include<string.h>
//#include<algorithm>  //使用stl会超时
//using namespace std;
#define max(a,b) a>b?a:b 
int weight[25];
int dp[100005];
int main(){
	int n;
	while(~scanf("%d",&n)){
		memset(dp,0,sizeof(dp));
		int sum=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&weight[i]);
			sum+=weight[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=sum/2;j>=weight[i];j--){
				dp[j]=max(dp[j], dp[j-weight[i]]+weight[i]);
			}
		}
		printf("%d\n",sum-2*dp[sum/2]);
	}
	return 0;
}

