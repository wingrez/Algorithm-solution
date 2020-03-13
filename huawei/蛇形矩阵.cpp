#include<iostream>
#include<cstring>
using namespace std;

const int MAXN=102;
int arr[MAXN][MAXN];

int main(){
    int n;
    while(cin>>n){
        int i=0, j=0;
        int cnt=1;
        while(i<n){
            arr[i][j]=cnt;
            cnt++;
            if(i==0){
                i=j+1;
                j=0;
            }
            else{
                i--;
                j++;
            }
        }
        for(i=0; i<n; ++i){
            for(j=0; j<n-i; ++j){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
