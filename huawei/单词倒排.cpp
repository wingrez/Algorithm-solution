#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main(){
	string str;
	while(getline(cin, str)){
		vector<string> vec;
		string word="";
		for(int i=0; i<str.size(); ++i){
			if(isalpha(str[i])){
				word=word+str[i];
			}
			else{
				if(!word.empty()) vec.push_back(word);
				word="";
			}
		}
		if(!word.empty()) vec.push_back(word);
		for(int i=vec.size()-1; i>=0; --i){
			if(i!=vec.size()-1) cout<<" ";
			cout<<vec[i];
		}
		cout<<endl;
	}
	return 0;
}
