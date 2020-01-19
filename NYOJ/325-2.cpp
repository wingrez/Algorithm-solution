#include<stdio.h>
#include<stdlib.h>
#define INF 0x3f3f3f3f 
int n;
int sum;//西瓜总重 
int weight[25];
int cnt,ans;//cnt：当前背包里的西瓜重量

void dfs(int num){
	if(num==n) return;
	if(abs(sum-2*cnt)<ans) ans=abs(sum-2*cnt);
	for(int i=num+1;i<=n;i++){
		cnt+=weight[i];
		dfs(i);
		cnt-=weight[i];
	}
}

int main(){
	while(~scanf("%d",&n)){
		sum=cnt=0;
		ans=INF;
		for(int i=1;i<=n;i++){
			scanf("%d",&weight[i]);
			sum+=weight[i];
		}
		dfs(0);
		printf("%d\n",ans);
	}
	return 0;
}

