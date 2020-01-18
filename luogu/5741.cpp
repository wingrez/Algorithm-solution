#include<iostream>
#include<cmath>
#include<string>
using namespace std;

struct Stu{
	string name;
	int chinese;
	int math;
	int english;
	int getAll(){
		return chinese+math+english;
	}
};

const int MAXN=1002;
Stu stu[MAXN];
int N;

bool judge(int i, int j){
	if(abs(stu[i].chinese-stu[j].chinese)<=5 && 
		abs(stu[i].math-stu[j].math)<=5 && 
		abs(stu[i].english-stu[j].english)<=5 && 
		abs(stu[i].getAll()-stu[j].getAll())<=10) return true;
	return false;
}

int main(){
	cin>>N;
	for(int i=0; i<N; ++i){
		cin>>stu[i].name>>stu[i].chinese>>stu[i].math>>stu[i].english;
	}
	for(int i=0; i<N; ++i){
		for(int j=i+1; j<N; ++j){
			if(judge(i, j)){
				cout<<stu[i].name<<" "<<stu[j].name<<endl;
			}
		}
	}
	return 0;
}
