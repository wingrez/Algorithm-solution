#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN=102;
int arr[MAXN];

int main(){
	int N, M;
	scanf("%d", &N);
	for(int i=0; i<N; ++i) 
		scanf("%d", &arr[i]);
	sort(arr, arr+N);
	M=unique(arr, arr+N)-arr;
	printf("%d\n", M);
	for(int i=0; i<M; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
