#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, sum;
int yanghui[12][13];

void genYangHui(int n){
	memset(yanghui, 0, sizeof(yanghui));
	yanghui[0][0]=1;
	for(int i=1; i<n; i++){
		yanghui[i][0]=1;
		for(int j=1; j<i; j++){
			yanghui[i][j]=yanghui[i-1][j-1]+yanghui[i-1][j];
		}
		yanghui[i][i]=1;
	}
}

int main(){
	genYangHui(12);
	cin>>n>>sum;
	vector<int> vec;
	for(int i=0; i<n; i++){
		vec.push_back(i+1);
	}
	
	do{
		int s=0;
		for(int i=0; i<n; i++){
			s+=vec[i]*yanghui[n-1][i];
		}
		if(s==sum){
			for(int j=0; j<vec.size(); j++){
				cout<<vec[j]<<" ";
			}
			break;
		}
	}while(next_permutation(begin(vec), end(vec)));
	
	return 0;
}
