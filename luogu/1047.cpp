#include<cstdio>

const int MAXN=10005;
int arr[MAXN];
int L, M;

int main(){
	int l, r;
	scanf("%d%d", &L, &M);
	for(int i=0; i<=L; ++i){
		arr[i]=1;
	}
	for(int i=0; i<M; ++i){
		scanf("%d%d", &l, &r);
		for(int j=l; j<=r; ++j){
			arr[j]=0;
		}
	}
	int sum=0;
	for(int i=0; i<=L; i++){
		sum+=arr[i];
	}
	printf("%d\n", sum);
	return 0;
}
