#include<iostream>
#include<string>
using namespace std;

string a,b;

int main(){
	while(cin>>a>>b){
		if(a=="0" && b=="0") break;
		if(a[0]=='-' && b[0]!='-'){
			cout<<"a<b"<<endl; 
			continue;
		} 
		if(a[0]!='-' && b[0]=='-'){
			cout<<"a>b"<<endl;
			continue;
		}
		if(a[0]=='-'){
			if(a.length()<b.length()){
				cout<<"a>b"<<endl;
				continue;
			}
			if(a.length()>b.length()){
				cout<<"a<b"<<endl;
				continue;
			}
			if(a>b){
				cout<<"a<b"<<endl;
				continue;
			}
			if(a<b){
				cout<<"a>b"<<endl;
				continue;
			}
			cout<<"a==b"<<endl;
			continue;
		}
		else{
			if(a.length()<b.length()){
				cout<<"a<b"<<endl;
				continue;
			}
			if(a.length()>b.length()){
				cout<<"a>b"<<endl;
				continue;
			}
			if(a>b){
				cout<<"a>b"<<endl;
				continue;
			}
			if(a<b){
				cout<<"a<b"<<endl;
				continue;
			}
			cout<<"a==b"<<endl;
			continue;
		}
	}
	return 0;
}
