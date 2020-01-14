#include<iostream>
#include<string>
using namespace std;

int n;

bool cmp(string s1, string s2){
	if(s1.length()<s2.length()) return true;
	else if(s1.length()==s2.length()) return s1<s2;
	return false;
}

int main(){
	cin>>n;
	string in, str="0";
	int pos;
	for(int i=1; i<=n; ++i){
		cin>>in;
		if(cmp(str, in)){ // str<in
			str=in;
			pos=i;
		}
	}
	cout<<pos<<endl;
	cout<<str<<endl;
	return 0;
}

