#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

bool cmp(char c1, char c2){
	if(isalpha(c1) && !isalpha(c2)) return true; 
	if(isalpha(c1) && isalpha(c2) && tolower(c1)<tolower(c2)) return true;
	return false;
}

int main(){
	string str;
	while(getline(cin, str)){
		string copys(str);
		stable_sort(str.begin(), str.end(), cmp);
		for(int i=0, j=0; i<copys.size(); ++i){
			if(!isalpha(copys[i])){
				cout<<copys[i];
			}
			else{
				cout<<str[j++];
			}
		}
		cout<<endl;
	}
	return 0;
}
