#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int arr[26]={
	2,2,2,
	3,3,3,
	4,4,4,
	5,5,5,
	6,6,6,
	7,7,7,7,
	8,8,8,
	9,9,9,9
};

int main(){
	string str;
	while(cin>>str){
		for(int i=0; i<str.size(); ++i){
			if(isupper(str[i])){
				cout<<char('a'+(str[i]-'A'+1)%26);
			}
			else if(islower(str[i])){
				cout<<arr[str[i]-'a'];
			}
			else{
				cout<<str[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
