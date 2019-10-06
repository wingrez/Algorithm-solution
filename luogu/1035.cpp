#include<cstdio>

int K;

int main(){
	scanf("%d", &K);
	double sum=0;
	for(int i=1; ; ++i){
		sum+=1.0/i;
		if(sum>K){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
