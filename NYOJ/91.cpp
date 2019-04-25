#include<stdio.h>
int f[9]={1,2,6,24,120,720,5040,40320,362880};
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int m;
		scanf("%d",&m);
		int flag=0;
		for(int i=8;i>=0;i--){
			if(m>=f[i]){
				m-=f[i];
			}
			if(m==0){
				flag=1;
				break;
			}
		}
		if(flag)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}

