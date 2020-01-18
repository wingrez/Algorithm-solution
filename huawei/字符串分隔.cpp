#include<iostream>
#include<string>
#define xout(x, y) for(int i=0; i<y; ++i) cout<<x;
using namespace std;

int main(){
	string str;
	while(cin>>str){
		int i=0, j=0;
		while(i<str.size()){
			cout<<str[i];
			i++; j++;
			if(j==8){
				cout<<endl;
				j=0;
			}
		}
		if(j>0){
			xout('0', 8-j);
			cout<<endl;
		}
	}
	return 0;
}
