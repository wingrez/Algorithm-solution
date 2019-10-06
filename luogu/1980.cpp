#include<cstdio>

int n, x;

int main(){
	int sum=0;
	scanf("%d%d", &n, &x);
	for(int i=1; i<=n; ++i){
		int t=i;
		while(t){
			if(t%10==x) ++sum;
			t/=10;
		}
	}
	printf("%d\n", sum);
	return 0;
}
