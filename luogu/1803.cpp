#include<cstdio>
#include<algorithm>
using namespace std;

struct Info{
	int s, t;
	bool operator < (const Info &rhs) const{
		if(t==rhs.t) return s>rhs.s;
		return t<rhs.t;
	}
};

const int MAXN=1000005;
Info arr[MAXN];
int n;

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%d%d", &arr[i].s, &arr[i].t);
	}
	sort(arr, arr+n);
	int cnt=0;
	int mt=0;
	for(int i=0; i<n; ++i){
		if(arr[i].s>=mt){
			cnt++;
			mt=arr[i].t;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
