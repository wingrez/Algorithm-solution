#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(string s1, string s2){
	if(stoi(s1)<stoi(s2)) return true;
	return false;
}

int main(){
	string str;
	vector<string> vec;
	while(cin>>str && str!="."){
		if(str=="one") vec.push_back("01");
		else if(str=="two") vec.push_back("04");
		else if(str=="three") vec.push_back("09");
		else if(str=="four") vec.push_back("16");
		else if(str=="five") vec.push_back("25");
		else if(str=="six") vec.push_back("36");
		else if(str=="seven") vec.push_back("49");
		else if(str=="eight") vec.push_back("64");
		else if(str=="nine") vec.push_back("81");
		else if(str=="ten") vec.push_back("00");
		else if(str=="eleven") vec.push_back("21");
		else if(str=="twelve") vec.push_back("44");
		else if(str=="thirteen") vec.push_back("69");
		else if(str=="fourteen") vec.push_back("96");
		else if(str=="fifteen") vec.push_back("25");
		else if(str=="sixteen") vec.push_back("56");
		else if(str=="seventeen") vec.push_back("89");
		else if(str=="eighteen") vec.push_back("24");
		else if(str=="nineteen") vec.push_back("61");
		else if(str=="twenty") vec.push_back("00");
		else if(str=="a") vec.push_back("01");
		else if(str=="both") vec.push_back("04");
		else if(str=="another") vec.push_back("01");
		else if(str=="first") vec.push_back("01");
		else if(str=="second") vec.push_back("04");
		else if(str=="third") vec.push_back("09");
	}
	sort(vec.begin(), vec.end(), cmp);
	int flag=1;
	for(int i=0; i<vec.size(); ++i){
		if(flag){
			if(vec[i]!="00") { cout<<stoi(vec[i]); flag=0;}
		}
		else{ cout<<vec[i]; }
	}
	if(flag) cout<<"0";
	return 0;
}
