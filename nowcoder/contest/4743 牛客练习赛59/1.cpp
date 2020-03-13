#include<iostream>
#include<string>
using namespace std;

bool judge(string s, string t){
	int i=0, j=0;
	while(i<s.size() && j<t.size()){
		if(s[i]==t[j]){
			j++;
		}
		i++;
	}
	if(j==t.size()) return true;
	return false;
}

int main(){
	string str;
	while(cin>>str){
		if(judge(str, "XiaoQiao") && judge(str, "XiaoHuiHui")){
			cout<<"Happy"<<endl;
		}
		else{
			cout<<"emm"<<endl;
		}
	}
	return 0;
}
