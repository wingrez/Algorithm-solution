#include<cstdio>

long long a1, a2, n;

int main(){
	scanf("%lld%lld%lld", &a1, &a2, &n);
	printf("%lld\n", a1*n+n*(n-1)*(a2-a1)/2);
	return 0;
}
