#include<cstdio>

int main(){
	int n;
	while(scanf("%d", &n)==1 && n!=0){
		int ans=0;
		while(n>=3){
			ans+=n/3; 
			n=n%3+n/3;
		}
		if(n==2) ans++;
		printf("%d\n", ans);
	}
	return 0;
}
