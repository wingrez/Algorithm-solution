#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Stu{
	string name;
	int award;
};

int N;
string name;
int sc1, sc2;
string leader, west;
int paper;

int main(){
	Stu bestStu; bestStu.award=0;
	int all=0;
	cin>>N;
	while(N--){
		int award=0;
		cin>>name>>sc1>>sc2>>leader>>west>>paper;
		if(sc1>80 && paper>=1) award+=8000;
		if(sc1>85 && sc2>80) award+=4000;
		if(sc1>90) award+=2000;
		if(sc1>85 && west=="Y") award+=1000;
		if(sc2>80 && leader=="Y") award+=850;
		if(award>bestStu.award){
			bestStu.name=name;
			bestStu.award=award;
		}
		all+=award;
	}
	cout<<bestStu.name<<endl;
	cout<<bestStu.award<<endl;
	cout<<all<<endl;
	return 0;
}
