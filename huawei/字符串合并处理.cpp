#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>
using namespace std;

char ProcessChar(char ch){
	int d, r=0;
	if(ch>='0' && ch<='9'){
		d=ch-'0';
	}
	else if(ch>='A' && ch<='F'){
		d=ch-'A'+10;
	}
	else if(ch>='a' && ch<='f'){
		d=ch-'a'+10;
	}
	else return ch;
	for(int i=0; i<4; ++i){
		r=(r<<1)+(d&1);
		d>>=1;
	}
	if(r>=0 && r<=9) return '0'+r;
	return r-10+'A';
}

string ProcessString(string s){
	string t1="", t2="";
	string ans="";
	for(int i=0; i<s.size(); ++i){
		if(i%2==0) t1=t1+s[i];
		else t2=t2+s[i];
	}
	sort(begin(t1), end(t1));
	sort(begin(t2), end(t2));
	for(int i=0; i<s.size(); i++){
		if(i%2==0) ans=ans+ProcessChar(t1[i/2]);
		else ans=ans+ProcessChar(t2[i/2]);
	}
	return ans;
}

int main(){
	string s1, s2;
	while(cin>>s1>>s2){
		cout<<ProcessString(s1+s2)<<endl;
	}
	return 0;
}
