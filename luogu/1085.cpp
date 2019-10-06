#include<cstdio>

int main(){
	int a, b;
	int maxn=0, ans=0;
	for(int i=1; i<=7; i++){
		scanf("%d%d", &a, &b);
		if(a+b>8 && a+b>maxn){
			ans=i; maxn=a+b;
		}
	}
	printf("%d\n", ans);
	return 0;
}
