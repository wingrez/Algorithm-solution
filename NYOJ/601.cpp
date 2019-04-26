#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int n,m;
vector<int> divs;

void getDivisors(int n){
	divs.clear();
	int i;
	for(i=1;i*i<n;i++){
		if(n%i==0){
			divs.push_back(i);
			divs.push_back(n/i);
		}
	}
	if(i*i==n){
		divs.push_back(i);
	}
}

string itoa(int n,int radix) //将10进制值n转换为任意进制字符串 
{
	string ans="";
	do{
		int t=n%radix;
		if(t>=0 && t<=9)	ans+=t+'0';
		else ans+=t-10+'A';
		n/=radix;
	}while(n!=0);
	reverse(ans.begin(),ans.end());
	return ans;	
}

int main(){
	while(~scanf("%d%d",&n,&m)){
		getDivisors(n);
		int sum=0;
		for(int i=0;i<divs.size();i++){
			string str=itoa(divs[i],m);
			for(int j=0;j<str.size();j++){
				if(str[j]>='A' && str[j]<='Z'){
					sum+=(str[j]-'A'+10)*(str[j]-'A'+10);
				}
				else sum+=(str[j]-'0')*(str[j]-'0');
			}
		}
		cout<<itoa(sum,m)<<endl;
	}
	return 0;
}
