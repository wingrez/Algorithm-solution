#include<iostream>
using namespace std;

int main(){
	long long num;
	int i=2;
	
	cin>>num; 
	while(num>1){
		if(num%i==0){
			cout<<i<<" ";
			num/=i;
		}
		else ++i;
	}
	return 0;
}
