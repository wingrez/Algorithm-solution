#include<iostream>
#include<string> 
#include<algorithm>
using namespace std;

int n;
string str;

int main(){
	cin>>n;
	while(n--){
		cin>>str;
		sort(str.begin(),str.end());
		for(int i=0;i<str.size();i++){
			cout<<str[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
