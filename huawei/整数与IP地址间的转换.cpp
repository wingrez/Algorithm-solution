#include<iostream>
using namespace std;

int main(){
    unsigned ip0, ip1, ip2, ip3;
    unsigned ip;
    char ch;
    while(cin>>ip0>>ch>>ip1>>ch>>ip2>>ch>>ip3){
        cout<<(ip0<<24)+(ip1<<16)+(ip2<<8)+ip3<<endl;
        cin>>ip;
        cout<<((ip&0xFF000000)>>24)<<".";
        cout<<((ip&0x00FF0000)>>16)<<".";
        cout<<((ip&0x0000FF00)>>8)<<".";
        cout<<(ip&0x000000FF)<<endl;
    }
}
