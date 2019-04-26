#include<cstdio>

const int MAXN=25;
int arr[MAXN];
void Fibonacci(int n){
	arr[1]=arr[2]=1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
}

int m;
int n;
int main(){
	Fibonacci(20);
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		printf("%d\n",arr[n]);
	}
	return 0;
}
