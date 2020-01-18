#include<iostream>
using namespace std;

int main(){
	int num;
	int cnt=0;
	
	cin>>num;
	while(num){
		cnt+=num&1;
		num>>=1;
	}
	cout<<cnt;
	
	return 0;
}
