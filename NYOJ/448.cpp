#include<stdio.h>
#include<string.h>
#define MAXN 105
char num[MAXN];
char ans[MAXN];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int m;
		scanf("%s%d",num,&m);
		int len=strlen(num);
		m=len-m;
		strncpy(ans,num,m);
		for(int i=m;i<len;i++){
			ans[m]=num[i];
			int flag=0;
			int j=0;
			while(j<m){
				if(flag==1){
					ans[j]=ans[j+1];
					j++;
					continue;
				}
				if(ans[j]<ans[j+1]){
					flag=1;
				}
				else j++;
			}
		}
		ans[m]='\0';
		printf("%s\n",ans);
	}
}

