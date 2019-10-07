#include<iostream>
#include<sstream>
#include<string>
using namespace std;

string reverse(string s){
	string ret="";
	int i=s.size()-1;
	while(s[i]=='0') --i;
	if(i==-1) ret+="0";
	else while(i>=0){
		ret+=s[i--];
	}
	return ret;
}

int main(){
	string str;
	cin>>str;
	if(str.find(".")!=string::npos){
		string s1, s2;
		stringstream ss(str);
		getline(ss, s1, '.');
		getline(ss, s2);
		cout<<reverse(s1)<<"."<<reverse(reverse(reverse(s2)))<<endl;
	}
	else if(str.find("/")!=string::npos){
		string s1, s2;
		stringstream ss(str);
		getline(ss, s1, '/');
		getline(ss, s2);
		cout<<reverse(s1)<<"/"<<reverse(s2)<<endl;
	}
	else if(str.find("%")!=string::npos){
		string s1;
		stringstream ss(str);
		getline(ss, s1, '%');
		cout<<reverse(s1)<<"%"<<endl;
	}
	else{
		cout<<reverse(str)<<endl;
	}
	return 0;
}
