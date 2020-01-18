#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	int k, v;
	map<int, int> mp;
	cin>>n;
	while(n--){
		cin>>k>>v;
		mp[k]+=v;
	}
	map<int, int>::iterator it;
	for(it=mp.begin(); it!=mp.end(); ++it){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
