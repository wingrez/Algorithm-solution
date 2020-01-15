#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

struct Info{
	int no, w;
	Info(int _no, int _w){
		no=_no; w=_w;
	}
	bool operator < (const Info &rhs) const{
		if(w==rhs.w) return no<rhs.no;
		return w>rhs.w;
	}
};

int n, k, w;
int E[10];
vector<Info> arr;

int main(){
	scanf("%d%d", &n, &k);
	for(int i=0; i<10; ++i){
		scanf("%d", &E[i]);
	}
	for(int i=0; i<n; ++i){
		scanf("%d", &w);
		arr.push_back(Info(i+1, w));
	}
	sort(arr.begin(), arr.end());
	
	for(int i=0; i!=arr.size(); ++i){
		arr[i].w+=E[i%10];
	}
	sort(arr.begin(), arr.end());
	
	for(int i=0; i!=k; ++i){
		printf("%d ", arr[i].no);
	}
	return 0;
}
