#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN=100002;
int arr[MAXN];

int main(){
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; ++i) 
		scanf("%d", &arr[i]);
	sort(arr, arr+N);
	for(int i=0; i<N; ++i){
		if(i!=0) printf(" ");
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}
