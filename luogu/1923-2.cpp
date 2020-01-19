#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN=5000005;
int n, k;
int arr[MAXN];

int main(){
	scanf("%d%d", &n, &k);
	for(int i=0; i<n; ++i){
		scanf("%d", &arr[i]);
	}
	nth_element(arr,arr+k,arr+n);
	printf("%d\n", arr[k]);
	return 0;
}
