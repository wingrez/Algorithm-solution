#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
	string exp;
	cin>>exp;
	
	char x;
	int a=0, b=0;
	int equal=1;
	int i=0;
	while(i<exp.size()){
		//处理 + - = 
		int sign=1;
		if(exp[i]=='-'){
			sign=-1; ++i;
		}
		else if(exp[i]=='+') ++i;
		else if(exp[i]=='='){
			equal=-1; ++i;
		} 
		
		//处理数字 
		int num=0;
		while(exp[i]>='0' && exp[i]<='9'){
			num=num*10+exp[i]-'0'; ++i;
		}
		
		//系数累加
		if(exp[i]>='a' && exp[i]<='z'){
			if(num==0) num=1;
			x=exp[i];
			a+=num*sign*equal; ++i;
		}
		else{
			b+=num*sign*equal;
		}
	}
	if(b*1.0/a==0) printf("%c=%.3f\n", x, 0);
	else printf("%c=%.3f\n", x, -b*1.0/a);
	return 0;
}
