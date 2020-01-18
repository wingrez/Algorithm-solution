#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int n;
vector<pair<int, int> > vec, tmp;

int main(){
	cin>>n;
	n=(int)pow(2,n);
	int v;
	for(int i=1; i<=n; ++i){
		cin>>v;
		vec.push_back(make_pair(i,v));
	}
	while(vec.size()>2){
		tmp.clear();
		for(int i=0; i<vec.size(); i+=2){
			if(vec[i].second>vec[i+1].second) tmp.push_back(vec[i]);
			else tmp.push_back(vec[i+1]);
		}
		vec=tmp;
	}
	if(vec[0].second>vec[1].second) cout<<vec[1].first<<endl;
	else cout<<vec[0].first<<endl;
	return 0;
}
