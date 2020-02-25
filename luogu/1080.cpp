#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node {
	int l, r;
	bool operator < (const Node &rhs) {
		return l*r<rhs.l*rhs.r;
	}
};

void check(vector<int> &res) {
	while(res.size()>1 && !res.back()) res.pop_back();
	for(int i=1; i<res.size(); ++i) {
		res[i]+=res[i-1]/10;
		res[i-1]%=10;
	}
	while(res.back()>=10) {
		res.push_back(res.back()/10);
		res[res.size()-2]%=10;
	}
}

void mul(vector<int> &res, int x) {
	for(int i=0; i<=res.size(); ++i) {
		res[i]=res[i]*x;
	}
	check(res);
}

void div(vector<int> &res, int x) {
	int q=0;
	for(int i=res.size()-1; i>=0; --i) {
		q*=10;
		q+=res[i];
		res[i]=q/x;
		q%=x;
	}
	check(res);
}

int cmp(vector<int> &a, vector<int> &b){
	if(a.size()>b.size()) return 1;
	if(a.size()<b.size()) return -1;
	int i=a.size();
	while(i>=0){
		if(a[i]!=b[i]) return a[i]>b[i];
		--i;
	}
	return 0;
}

const int MAXN=1005;
int n;
Node arr[MAXN];

int main() {
	scanf("%d", &n);
	for(int i=0; i<n+1; ++i) {
		scanf("%d%d", &arr[i].l, &arr[i].r);
	}
	sort(arr+1, arr+n+1);
	
	vector<int> res(1,1), ans(1,0);
	vector<int> tmp;
	for(int i=1; i<n+1; ++i){
		mul(res, arr[i-1].l);
		tmp=res;
		div(tmp, arr[i].r);
		if(cmp(tmp, ans)>0){
			ans=tmp;
		}
	}
	
	for(int i=ans.size()-1; i>=0; --i){
		printf("%d", ans[i]);
	}
	
	return 0;
}
