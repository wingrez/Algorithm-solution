#include<cstdio>
#include<algorithm>
using namespace std;

struct Info{
	int no;
	int t;
	bool operator < (const Info &rhs) const{
		if(t==rhs.t) return no<rhs.no;
		return t<rhs.t;
	}
};

const int MAXN=1000005;
Info arr[MAXN];
int n;

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%d", &arr[i].t);
		arr[i].no=i+1;
	}
	sort(arr, arr+n);
	printf("%d ", arr[0].no); 
	long long sum=0, pre=0;
	for(int i=1; i<n; i++){
		printf("%d ", arr[i].no);
		sum+=pre+arr[i-1].t;
		pre+=arr[i-1].t;
	}
	printf("\n");
	printf("%.2f\n", sum*1.0/n);
	return 0;
}
