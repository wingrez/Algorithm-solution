#include<cstdio>

double des;

int main(){
	double sum=0;
	double pre=2;
	scanf("%lf", &des);
	for(int i=1; ; ++i){
		sum+=pre;
		if(sum>=des){
			printf("%d\n", i);
			break;
		}
		pre*=0.98;
	}
	return 0;
}
