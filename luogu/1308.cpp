#include<iostream>
#include<string>
#include<sstream>
#include<algorithm> 
#include<cctype>
using namespace std;

int main(){
	string s1, s2, t;
	getline(cin, s1);
	getline(cin, s2);
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	stringstream ss(s2);
	int cnt=0, pos=-1, i=0;
	while(getline(ss, t, ' ')){
		
		if(s1==t){
			++cnt;
			if(pos==-1){
				pos=i;
			}
		}
		i+=t.length()+1;
	}
	if(cnt==0) cout<<"-1"<<endl;
	else cout<<cnt<<" "<<pos<<endl;
	return 0;
}
