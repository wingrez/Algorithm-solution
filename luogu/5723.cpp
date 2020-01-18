#include<iostream>
#include<cmath>
using namespace std;

int is_prime(int n) {
	if(n==2 || n==3 ) return 1 ;
	if(n%6!=1 && n%6!=5) return 0 ;
	int t=sqrt(n);
	for(int i=5; i<=t;i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;
}

int main(){
	int L;
	int cnt=0;
	cin>>L;
	for(int i=2; i<=L; ++i){
		if(is_prime(i)){
			L-=i;
			cnt++;
			cout<<i<<endl;
		}
	}
	cout<<cnt<<endl;
	return 0;
}

