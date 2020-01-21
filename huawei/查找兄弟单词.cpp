#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

map<string, vector<string> > dict;

int main(){
	int n;
	string word, tmp;
	while(cin>>n){
		dict.clear();
		while(n--){
			cin>>word;
			tmp=word;
			sort(word.begin(), word.end());
			dict[word].push_back(tmp);
		}
		cin>>word>>n;
		tmp=word;
		sort(word.begin(), word.end());
		sort(dict[word].begin(), dict[word].end());
		vector<string>::iterator it=dict[word].begin();
		string ans;
		int cnt=0;
		while(it!=dict[word].end()){
			if(*it!=tmp) cnt++;
			if(cnt==n && ans.empty()) ans=*it;
			it++;
		}
		cout<<cnt<<endl;
		if(!ans.empty()) cout<<ans<<endl;
	}
	return 0;
}
