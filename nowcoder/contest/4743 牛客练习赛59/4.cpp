#include<iostream>
using namespace std;
typedef long long LL;

int main(){
	LL t, n;
	cin>>t;
	while(t--){
		cin>>n;
		LL l=2, r=3;
		int flag=0;
		while(n>=l){
			if(n>=l && n<=r){
				flag=1;
				break;
			}
			l=l*2+r;
			r=r*2+l;
		}
		if(flag) cout<<"XiaoHuiHui"<<endl;
		else cout<<"XiaoQiao"<<endl;
	}
	return 0;
}
