#include<iostream>
#include<string>
using namespace std;

const int MAXN=5005; 
string s;
int n;

int main(){
	cin>>n;
	s="1";
	for(int i=2;i<=n;i++){
		int c=0;
		for(int j=0;j<s.size();j++){
			int v=(s[j]-'0')*i+c;
			s[j]=v%10+'0';
			c=v/10;
		}
		while(c){
			s.append(string(1,c%10+'0'));
			c/=10;
		}
	}
	for(int i=s.size()-1;i>=0;i--){
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}
