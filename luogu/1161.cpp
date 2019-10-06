#include<cstdio>

const int MAXN=2000005;
bool open[MAXN];
int n;
double a;
int t;

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%lf%d", &a, &t);
		for(int j=1; j<=t; ++j){
			open[(int)(a*j)]=!open[(int)(a*j)];
		}
	}
	for(int i=1; i<MAXN; ++i){
		if(open[i]){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
} 
