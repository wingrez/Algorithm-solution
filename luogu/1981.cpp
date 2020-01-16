#include<cstdio>
#include<cctype>
#include<iostream>
#include<sstream>
#include<string>
#include<stack>
using namespace std;

int main(){
	stack<int> numstk;
	stack<char> opstk;
	string str;
	stringstream ss;
	int num, numA, numB;
	char op;
	
	cin>>str;
	ss<<str+"#";
	
	ss>>num;
	numstk.push(num);
	while(ss>>op && op!='#'){
		if(op=='+'){
			if(!opstk.empty()){
				numB=numstk.top(); numstk.pop();
				numA=numstk.top(); numstk.pop();
				numstk.push((numA+numB)%10000);
				opstk.pop();
			}
			ss>>num;
			numstk.push(num);
			opstk.push('+');
		}
		else if(op=='*'){
			numA=numstk.top(); numstk.pop();
			numB;
			ss>>numB;
			numstk.push((numA*numB)%10000);
		}
	}
	if(!opstk.empty()){
		numB=numstk.top(); numstk.pop();
		numA=numstk.top(); numstk.pop();
		numstk.push((numA+numB)%10000);
	}
	printf("%d\n", numstk.top()%10000);
	return 0;
}
