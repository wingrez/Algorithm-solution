#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n;
	string str;
	vector<string> vec;
	
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>str;
		vec.push_back(str);
	}
	
	sort(vec.begin(), vec.end());
	
	for(int i=0; i<n; ++i){
		cout<<vec[i]<<endl;
	}
	
	return 0;
}
