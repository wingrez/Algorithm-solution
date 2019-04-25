#include<stdio.h>
#include<string.h>
int num[9];
int vis[9];
int n,m;

void next(int x,int pos){
	vis[x]=1;
	num[pos]=x;
	if(pos==m){
		for(int i=1;i<=pos;i++)
			printf("%d",num[i]);
		printf("\n");
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			next(i,pos+1);
			vis[i]=0;
		}
	}
}

int main(){
	int N;
	scanf("%d",&N);
	while(N--){
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++){
			memset(vis,0,sizeof(vis));
			next(i,1);
		}
	}
	return 0;
}

