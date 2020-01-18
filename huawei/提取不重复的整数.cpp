#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int num[10]={0};
	cin>>str;
	for(int i=str.size()-1; i>=0; --i){
		if(!num[str[i]-'0']){
			cout<<str[i];
			num[str[i]-'0']=1;
		}
	}
	return 0;
}
