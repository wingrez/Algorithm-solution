#include<cstdio>

const int MAXN=102;
int arr[MAXN];
int n;

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%d", &arr[i]);
		int sum=0;
		for(int j=i-1; j>=0; --j){
			if(arr[i]>arr[j])
				sum++;
		}
		printf("%d ", sum);
	}
	printf("\n");
	return 0;
}
