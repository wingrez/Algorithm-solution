#include<cstdio>

int arr[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int n;

int cal(int n){ //计算n需要的火柴棒个数 
	if(n<=9) return arr[n];
	int ret=0;
	while(n){
		ret+=arr[n%10];
		n/=10;
	}
	return ret;
}

int main(){
	scanf("%d", &n);
	int cnt=0;
	for(int i=0; cal(i)<=n-4; ++i){
		for(int j=0; cal(j)<=n-4; ++j){
			if(cal(i)+cal(j)+cal(i+j)==n-4)
				++cnt;
		}
	}
	printf("%d\n", cnt);
}
