#include<cstdio>

const int MAXN=5000005;
int n, k;
int arr[MAXN];

int partition(int *arr, int l, int r){
	int x=arr[l];
	while(l<r){
		while(l<r && arr[r]>=x) --r;
		arr[l]=arr[r];
		while(l<r && arr[l]<=x) ++l;
		arr[r]=arr[l];
	}
	arr[l]=x;
	return l;
}

int find(int *arr, int l, int r, int k){
	if(l<=r){
		int p=partition(arr, l ,r);
		if(p-l+1==k) return p;
		else if(p-l+1<k) return find(arr, p+1, r, k-(p-l+1));
		else return find(arr, l, p-1, k);
	}
}

int main(){
	scanf("%d%d", &n, &k);
	for(int i=1; i<=n; ++i){
		scanf("%d", &arr[i]);
	}
	printf("%d\n", arr[find(arr,1,n,k+1)]);
	return 0;
}
