#include<cstdio>

const int MAXN=1002;
int arr[MAXN];
int n;

int main(){
	for(int i=1; i<=1000; ++i){
		arr[i]+=1;
		for(int j=1; j<=i/2; ++j){
			arr[i]+=arr[j];
		}
	}
	scanf("%d", &n);
	printf("%d\n", arr[n]);
	return 0;
}
