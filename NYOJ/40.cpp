#include<cstdio>


int gcd(int a, int b){
	return b==0?a:gcd(b,a%b);
}

int n;
int a,b;

int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		int g=gcd(a,b);
		int l=a*b/g;
		printf("%d %d\n", g, l);
	}
	return 0;
}
