#include<cstdio>
#include<algorithm>
using namespace std;

struct Info{
	int p, q;
	bool operator < (const Info &rhs) const{
		return p<rhs.p;
	}
};

const int MAXN=2000005;
Info arr[MAXN];
int n, m;

int main(){
	scanf("%d%d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d%d", &arr[i].p, &arr[i].q);
	}
	sort(arr, arr+m);
	int ans=0;
	for(int i=0; i<m && n; ++i){
		if(n>arr[i].q){
			ans+=arr[i].p*arr[i].q;
			n-=arr[i].q;
		}
		else if(n>0){
			ans+=arr[i].p*n;
			n=0;
		}
	}
	printf("%d\n", ans);
	return 0;
}
