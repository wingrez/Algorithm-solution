#include<iostream>
#include<string>
using namespace std;

string m,n;

int main(){
	while(true){
		cin>>m>>n;
		if(m=="0" && n=="0") break;
		int sum;
		int cnt=0, c=0;
		for(int i=2;i>=0;i--){
			sum=m[i]-'0'+n[i]-'0'+c;
			c=sum/10;
			if(sum>=10){
				cnt++;
			}
		}
		if(c>=10) cnt++;
		cout<<cnt<<endl;
	}
	return 0;
}
