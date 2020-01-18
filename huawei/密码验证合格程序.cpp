#include<iostream>
#include<string>
using namespace std;

bool judge(string str){
	if(str.size()<=8) return false;
	int cnt=0, flag=0;
	for(int i=0; i<str.size(); ++i){
		if(isdigit(str[i]) && (flag&1)==0){
			flag=flag|1; cnt++;
		}
		else if(isupper(str[i]) && (flag&2)==0){
			flag=flag|2; cnt++;
		}
		else if(islower(str[i]) && (flag&4)==0){
			flag=flag|4; cnt++;
		}
		else if(!isalnum(str[i]) && (flag&8)==0){
			flag=flag|8; cnt++;
		}
	} 
	if(cnt<3) return false;
	string t;
	flag=0;
	for(int i=0; i<str.size()-6; ++i){
		t=str.substr(i,3);
		if(str.find(t,i+3)!=string::npos){
			flag=1; break;
		}
	}
	if(flag) return false;
	return true;
}

int main(){
	string str;
	while(cin>>str){
		if(judge(str)) cout<<"OK"<<endl;
		else cout<<"NG"<<endl;
	}
	return 0;
}
