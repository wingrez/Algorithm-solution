#include<cstdio>
#include<cmath>

int n;

int main(){
	while(true){
		scanf("%d",&n);
		if(n==0) break;
		int sum=0;
		int t=n;
		while(t>0){
			sum+=(int)pow(t%10,3);
			t/=10;
		}
		if(sum==n) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
