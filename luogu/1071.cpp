#include<iostream>
#include<map>
using namespace std;

int main(){
	string s1, s2, s3;
	map<char, char> mp;
	int has[26]={0};
	int flag=1;
	cin>>s1>>s2>>s3;
	for(int i=0; flag && i<s1.size(); i++){
		if(mp.find(s1[i])==mp.end() && has[s2[i]-'A']==0){
			mp[s1[i]]=s2[i];
			has[s2[i]-'A']=1;
		}
		else if(mp[s1[i]]==s2[i]) continue;
		else flag=0;
	}
	if(!flag || mp.size()!=26) cout<<"Failed";
	else{
		for(int i=0; i<s3.size(); i++){
			cout<<mp[s3[i]];
		}
	}
	return 0;
}
