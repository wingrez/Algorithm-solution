#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN=1002;
int arr[MAXN];

int main(){
	int n;
	while(cin>>n){
		for(int i=0; i<n; ++i){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		n=unique(arr, arr+n)-arr;
		for(int i=0; i<n; ++i){
			cout<<arr[i]<<endl;
		}
	}
	return 0;
} 
