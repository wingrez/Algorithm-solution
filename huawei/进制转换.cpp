#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	while(cin>>str){
		cout<<stoll(str, 0, 16)<<endl;
	}
	return 0;
}
