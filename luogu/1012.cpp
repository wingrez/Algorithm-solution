#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN=22;
string nums[MAXN];

bool cmp(string s1, string s2){
	if(s1+s2>s2+s1) return true;
	return false;
}

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>nums[i];
	}
	sort(nums, nums+n, cmp);
	for(int i=0; i<n; ++i){
		cout<<nums[i];
	}
	return 0;
}
