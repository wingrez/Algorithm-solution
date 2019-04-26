#include<cstdio>
#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string, string> mp;

int main(){
	mp["A#"]="Bb"; mp["Bb"]="A#";
	mp["C#"]="Db"; mp["Db"]="C#";
	mp["D#"]="Eb"; mp["Eb"]="D#";
	mp["F#"]="Gb"; mp["Gb"]="F#";
	mp["G#"]="Ab"; mp["Ab"]="G#";
	int cnt=0;
	string s1,s2;
	while(cin>>s1>>s2){
		printf("Case %d: ",++cnt);
		int flag=1;
		if(mp.find(s1)!=mp.end()){ //找到第一个 
			cout<<mp[s1]<<" ";
			if(mp.find(s2)!=mp.end()){ //找到第二个 
				cout<<mp[s2]<<endl;
			}
			else{ //找不到第二个 
				cout<<s2<<endl;
			}
		}
		else{ //找不到第一个 
			if(mp.find(s2)!=mp.end()){ //找到第二个 
				cout<<s1<<" "<<mp[s2]<<endl;
			}
			else{ //找不到第二个 
				cout<<"UNIQUE"<<endl;
			}
		}
	}
	return 0;
}
