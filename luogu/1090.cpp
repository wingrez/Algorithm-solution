#include<iostream>
#include<queue>
using namespace std;

int n;
priority_queue<int, vector<int>, greater<int> > pq; 

int main(){
	cin>>n;
	int v;
	for(int i=0; i<n; i++){
		cin>>v;
		pq.push(v);
	}
	
	int ans=0;
	while(pq.size()>1){
		int A=pq.top(); pq.pop();
		int B=pq.top(); pq.pop();
		ans=ans+A+B;
		pq.push(A+B);
	}
	cout<<ans<<endl;
	return 0;
}
