#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
    string str, ch;
    cin>>str>>ch;
    int cnt=0;
    for(int i=0; i<str.size(); ++i){
        if(tolower(str[i])==tolower(ch[0])) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
