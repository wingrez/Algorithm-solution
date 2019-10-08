#include<cstdio>

int N;

int main(){
	scanf("%d", &N);
	int i=1;
	while(N>(i*(i+1)/2)) ++i; //计算在第几斜 
	
	int n=N-(i-1)*i/2-1; //与该斜第一个数的距离 
	int a, b; //分子/分母 
	if(i&1){
		a=i; b=1;
		for(int j=0; j<n; j++){
			--a; ++b;
		}
	}
	else{
		a=1, b=i;
		for(int j=0; j<n; j++){
			++a; --b;
		}
	}
	printf("%d/%d\n", a, b);
	return 0;
}
