#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    while(cin>>str){
        sort(str.begin(), str.end());
        cout<<str<<endl;
    }
    return 0;
}
