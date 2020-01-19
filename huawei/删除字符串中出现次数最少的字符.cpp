#include<iostream>
#include<string>
#define MAXN 0x3f3f3f3f
using namespace std;

int main(){
	string str;
	while(cin>>str){
		int alp[26]={0};
		for(int i=0; i<str.size(); ++i){
			alp[str[i]-'a']++;
		}
		int mm=MAXN;
		for(int i=0; i<26; ++i){
			if(alp[i]!=0 && alp[i]<mm) mm=alp[i];
		}
		
		for(int i=0; i<str.size(); ++i){
			if(alp[str[i]-'a']==mm) continue;
			cout<<str[i];
		}
		cout<<endl;
	}
	return 0;
}
