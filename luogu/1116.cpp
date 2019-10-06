#include<cstdio>

const int MAXN=10005;
int arr[MAXN];
int N;

int main(){
	scanf("%d", &N);
	for(int i=0; i<N; ++i){
		scanf("%d", &arr[i]);
	}
	int ans=0;
	for(int i=0; i<N; ++i){
		for(int j=i+1; j<N; ++j){
			if(arr[i]>arr[j]) ++ans;
		}
	}
	printf("%d\n", ans);
	return 0;
}
