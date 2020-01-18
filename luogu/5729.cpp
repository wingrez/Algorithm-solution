#include<iostream>
using namespace std;

const int MAXN=22;
int arr[MAXN][MAXN][MAXN];

int main(){
	int w, x, h, q;
	int x1, y1, z1;
	int x2, y2, z2;
	cin>>w>>x>>h>>q;
	for(int i=0; i<q; ++i){
		cin>>x1>>y1>>z1;
		cin>>x2>>y2>>z2;
		for(int j=x1; j<=x2; ++j){
			for(int k=y1; k<=y2; ++k){
				for(int l=z1; l<=z2; ++l){
					arr[j][k][l]=1;
				}
			}
		}
	}
	
	int cnt=0;
	for(int j=1; j<=w; ++j){
		for(int k=1; k<=x; ++k){
			for(int l=1; l<=h; ++l){
				if(arr[j][k][l]==0) cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}
