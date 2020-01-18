#include<iostream>
#include<cctype>
#include<sstream>
#include<string>
using namespace std;

int main(){
	string str;
	stringstream ss;
	int x, y;
	while(cin>>str){
		ss.clear();
		ss<<str;
		x=0; y=0;
		while(getline(ss, str, ';')){
			if(str[0]=='A' || str[0]=='D' || str[0]=='W' || str[0]=='S'){
				int v;
				if(str.size()==2 && isdigit(str[1])) v=str[1]-'0';
				else if(str.size()==3 && isdigit(str[1]) && isdigit(str[2])) v=(str[1]-'0')*10+str[2]-'0';
				else continue;
				switch(str[0]){
					case 'A': x-=v; break;
					case 'D': x+=v; break;
					case 'W': y+=v; break;
					case 'S': y-=v; break;
				}
			}
		}
		cout<<x<<","<<y<<endl;
	}
	return 0;
}
