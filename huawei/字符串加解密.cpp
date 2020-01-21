#include<iostream>
#include<cctype>
#include<string>
using namespace std;

string Encrypt(string &s){
	char ch;
	string res="";
	for(int i=0; i<s.size(); ++i){
		if(isalpha(s[i])){
			if(isupper(s[i])) ch='a'+(s[i]-'A'+1)%26;
			else ch='A'+(s[i]-'a'+1)%26;
		}
		else if(isdigit(s[i])) ch='0'+(s[i]-'0'+1)%10;
		else ch=s[i];
		res=res+ch;
	}
	return res;
}

string unEncrypt(string &s){
	char ch;
	string res="";
	for(int i=0; i<s.size(); ++i){
		if(isalpha(s[i])){
			if(isupper(s[i])) ch='a'+(s[i]-'A'-1+26)%26;
			else ch='A'+(s[i]-'a'-1+26)%26;
		}
		else if(isdigit(s[i])) ch='0'+(s[i]-'0'-1+10)%10;
		else ch=s[i];
		res=res+ch;
	}
	return res;
}

int main(){
	string s1, s2;
	while(cin>>s1>>s2){
		cout<<Encrypt(s1)<<endl;
		cout<<unEncrypt(s2)<<endl;
	}
	return 0;
}
