#include<iostream>
#include<list>
using namespace std;

int main(){
	int n, m;
	list<int> l;
	cin>>n>>m;
	
	for(int i=1; i<=n; i++){
		l.push_back(i);
	}
	
	list<int>::iterator it=l.begin();
	int k=0;
	while(l.size()>0){
		k++;
		if(k==m){
			cout<<*it<<" ";
			it=l.erase(it);
			k=0;
		}
		else 
			it++;
		if(it==l.end())
			it=l.begin();
	}
	return 0;
}
