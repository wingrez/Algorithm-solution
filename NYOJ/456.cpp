#include<stdio.h>
#include<string.h>
#include<algorithm>
#define MAXN 1005
using namespace std;
int value[MAXN];
int dp[50005];
int main(){
    int m;
    scanf("%d",&m);
    while(m--){
        memset(dp,0,sizeof(dp));
        int n;
        scanf("%d",&n);
        int sum=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&value[i]);
            sum+=value[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=sum/2;j>=value[i];j--){
                dp[j]=max(dp[j], dp[j-value[i]]+value[i]);
            }
        }
        printf("%d\n",sum-2*dp[sum/2]);
    }
    return 0;
}

