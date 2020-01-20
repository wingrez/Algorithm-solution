#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;

const int MAXN=30005;
int arr[MAXN];
int w,n;

int main(){
	scanf("%d%d", &w, &n);
	for(int i=0; i<n; ++i){
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+n, greater<int>());
	int cnt=0;
	int i=0, j=n-1;
	while(i<j){
		if(arr[i]+arr[j]<=w){
			i++; j--;
		}
		else i++;
		cnt++;
	}
	if(i==j) cnt++;
	printf("%d\n", cnt);
	return 0;
}
