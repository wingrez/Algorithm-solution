#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN=5002;
struct Info{
	int x, y;
	bool operator < (Info &rhs){
		return y<rhs.y;
	}
};
Info arr[MAXN];
int n, s;
int a, b;

int main(){
	scanf("%d%d", &n, &s);
	scanf("%d%d", &a, &b);
	for(int i=0; i<n; i++){
		scanf("%d%d", &arr[i].x, &arr[i].y);
	}
	sort(arr,arr+n);
	
	int cnt=0;
	for(int i=0; i<n; ++i){
		if(arr[i].y<=s && arr[i].x<=a+b){
			++cnt;
			s-=arr[i].y;
		}
	}
	
	printf("%d\n", cnt);
	return 0;
} 
