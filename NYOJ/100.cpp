#include<cstdio>

int N;
int M;

int main(){
	scanf("%d",&N);
	while(N--){
		scanf("%d",&M);
		int cnt=0;
		while(M>0){
			if((M&1)==1) cnt++;
			M>>=1;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
