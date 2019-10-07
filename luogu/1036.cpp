#include<cstdio>
#include<cmath>

const int MAXN=22;
int arr[MAXN];
int vis[MAXN];
int n, k;

//判断n是否是质数
int is_prime(int n) {
	if(n==2 || n==3 ) return 1 ;
	if(n%6!=1 && n%6!=5) return 0 ;
	int t=sqrt(n);
	for(int i=5; i<=t;i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;
}

int solve(int no, int sum, int st){
	if(no==k){
		if(is_prime(sum)) return 1;
		return 0; 
	}
	int cnt=0;
	for(int i=st; i<n; ++i){
		if(vis[i]==0){
			sum+=arr[i];
			vis[i]=1;
			cnt+=solve(no+1, sum, i+1);
			vis[i]=0;
			sum-=arr[i];
		}
	}
	return cnt;
}

int main(){
	scanf("%d%d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("%d\n", solve(0, 0, 0));
	return 0;
}
