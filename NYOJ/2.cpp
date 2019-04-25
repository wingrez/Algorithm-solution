#include<iostream>
#include<string>
#include<stack>
using namespace std;

int N;
string S;
stack<char> stk;

int main(){
	scanf("%d",&N);
	while(N--){
		while(!stk.empty()){
			stk.pop();
		}
		cin>>S;
		int flag=1;
		for(int i=0;i<S.length();i++){
			if(S[i]=='[' || S[i]=='('){
				stk.push(S[i]);
			}
			else{
				if(stk.empty()){
					flag=0;
					break;
				}
				char ch=stk.top();
				stk.pop();
				
				if(S[i]==']' && ch=='[' || S[i]==')' && ch=='('){
					continue;
				}
				else{
					flag=0;
					break;
				}
			}
		}
		if(flag && stk.empty()) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
