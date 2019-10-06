#include<cstdio>

const int MAXN=10005;
int arr[MAXN], tmp[MAXN];
int N;

int merge(int l, int m, int r){
	int i=l, j=m+1, k=l;
	int cnt=0;
	while(i<=m && j<=r){
		if(arr[i]<=arr[j]){
			tmp[k++]=arr[i++];
		}
		else{
			tmp[k++]=arr[j++];
			cnt+=j-k;
		}
	}
	while(i<=m) tmp[k++]=arr[i++];
	while(j<=r) tmp[k++]=arr[j++];
	for(int i=l; i<=r; ++i) arr[i]=tmp[i];
	return cnt;
}

int mergeSort(int l, int r){
	if(l<r){
		int m=(l+r)/2;
		int cnt=0;
		cnt+=mergeSort(l,m);
		cnt+=mergeSort(m+1, r);
		cnt+=merge(l, m, r);
		return cnt;
	}
	return 0;
}


int main(){
	scanf("%d", &N);
	for(int i=0; i<N; ++i){
		scanf("%d", &arr[i]);
	}
	printf("%d\n", mergeSort(0, N-1));
	return 0;
}
