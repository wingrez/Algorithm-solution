#include<iostream>
#define out(x,y) for(int i=0; i<y; i++) cout<<x
using namespace std;

int k;
string str;
int nums[10][7]={ //7位数码管 
	{1,1,1,1,1,1,0},
	{0,1,1,0,0,0,0},
	{1,1,0,1,1,0,1},
	{1,1,1,1,0,0,1},
	{0,1,1,0,0,1,1},
	{1,0,1,1,0,1,1},
	{1,0,1,1,1,1,1},
	{1,1,1,0,0,0,0},
	{1,1,1,1,1,1,1},
	{1,1,1,1,0,1,1}
};

void Horizontal(int id){ //id 数码管中某一位 
	for(int i=0; i<str.size(); ++i){
		if(nums[str[i]-'0'][id]){
			out(' ', 1);
			out('-', k);
			out(' ', 1);
		}
		else out(' ', k+2);
		out(' ', 1); 
	}
}

void Vertical(int id1, int id2){
	for(int i=0; i<k; ++i){
		if(i!=0) cout<<endl;
		for(int j=0; j<str.size(); ++j){
			if(nums[str[j]-'0'][id1]) out('|', 1);
			else out(' ', 1);
			out(' ', k);
			if(nums[str[j]-'0'][id2]) out('|', 1);
			else out(' ', 1);
			out(' ', 1);
		}
	}
}

int main(){
	cin>>k>>str;
	Horizontal(0); cout<<endl;
	Vertical(5,1); cout<<endl;
	Horizontal(6); cout<<endl;
	Vertical(4,2); cout<<endl;
	Horizontal(3);
}
