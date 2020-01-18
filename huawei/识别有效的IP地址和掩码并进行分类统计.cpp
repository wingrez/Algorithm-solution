#include<iostream>
#include<sstream>
#include<string>
using namespace std;

inline bool range(const string& t, int l, int r){
	return (stoi(t)>=l&&stoi(t)<=r);
}

int judge_ip(string *s){
	for(int i=0; i<4; ++i){
		if(s[i].empty()) return -1;
	}
	if(range(s[0],0,255) && range(s[1],0,255) && range(s[2],0,255) && range(s[3],0,255)){
		if(range(s[0],0,0)) return 7;
		if(range(s[0],1,126)) return 0;
		if(range(s[0],127,127)) return 7;
		if(range(s[0],128,191)) return 1;
		if(range(s[0],192,223)) return 2;
		if(range(s[0],224,239)) return 3;
		if(range(s[0],240,255)) return 4;
	}
	return -1;
}

int judge_mask(string *s){
	for(int i=0; i<4; ++i){
		if(s[i].empty()) return -1;
	}
	if(s[0]=="255" && s[1]=="255" && s[2]=="255" && s[3]=="255") return -1;
	if(s[0]=="0" && s[1]=="0" && s[2]=="0" && s[3]=="0") return -1;
	if(!range(s[0],0,255) || !range(s[1],0,255) || !range(s[2],0,255) || !range(s[3],0,255)) return -1;
	
	int zero=1;
	for(int i=3; i>=0; --i){
		int num=stoi(s[i]);
		for(int j=0; j<8; ++j){
			if(zero==1 && (num&1)==1) zero=0;
			else if(zero==0 && (num&1)==0) return -1;
			num>>=1;
		}
	}
	return 0;
}

int is_pri(string *s){
	if(range(s[0],10,10) && range(s[1],0,255) && range(s[2],0,255) && range(s[3],0,255)) return 1;
	if(range(s[0],172,172) && range(s[1],16,31) && range(s[2],0,255) && range(s[3],0,255)) return 1;
	if(range(s[0],192,192) && range(s[1],168,168) && range(s[2],0,255) && range(s[3],0,255)) return 1;
	return 0;
}

int main(){
	string str;
	int arr[8]={0};
	while(cin>>str){
		stringstream ss1, ss2;
		string s1[4], s2[4];
		
		ss1<<str; getline(ss1, str, '~'); 
		ss2<<str;
		for(int i=0; i<4; ++i){
			getline(ss2, s1[i], '.');
		}
		ss2.clear();
		
		getline(ss1, str);
		ss2<<str;
		for(int i=0; i<4; ++i){
			getline(ss2, s2[i], '.');
		}
		
		int res1=judge_ip(s1), res2=judge_mask(s2);
		if(res1==-1 || res2==-1){
			arr[5]++;
		} else {
			arr[res1]++;
			if(is_pri(s1)) arr[6]++;
		}
	}
	
	for(int i=0; i<7; ++i){
		if(i!=0) cout<<" ";
		cout<<arr[i];
	}
	return 0;
}
