#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	string str;
	vector<string> vec;
	while(cin>>str){
		vec.push_back(str);
	}
	for(int i=vec.size()-1; i>=0; --i){
		if(i!=vec.size()-1) cout<<" ";
		cout<<vec[i];
	}
	return 0;
}
