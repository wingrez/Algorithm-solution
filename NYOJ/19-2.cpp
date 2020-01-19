#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

char num[9]="12345678";

int main(){
	int N;
	scanf("%d",&N);
	while(N--){
		int n,m;
		scanf("%d%d",&n,&m);
		char t[9]={0};
		do{
			if(strncmp(num,t,m)!=0){
				strncpy(t,num,m);
				printf("%s\n",t);
			}
		}while(next_permutation(num,num+n));
	}
	return 0;
}

