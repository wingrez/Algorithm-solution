#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAXN=105;

struct Stu{
	char name[25];
	int grade1, grade2, isF1, isF2, num;
	int money;
	Stu(){};
	Stu(char *_name, int  _grade1, int _grade2, int _isF1, int _isF2, int _num){
		strcpy(name, _name);
		grade1=_grade1;
		grade2=_grade2;
		isF1=_isF1;
		isF2=_isF2;
		num=_num;
		money=0;
		calc();
	}
	void calc(){
		if(grade1>80 && num>=1) money+=8000;
		if(grade1>85 && grade2>80) money+=4000;
		if(grade1>90) money+=2000;
		if(grade1>85 && isF2==1) money+=1000;
		if(grade2>80 && isF1==1) money+=850;
	}
};

Stu stu[MAXN];

int N;
int X;
char name[25], isF1[3], isF2[3];
int grade1, grade2, num;

int main(){
	scanf("%d", &N);
	while(N--){
		int sum=0;
		scanf("%d", &X);
		for(int i=0;i<X;i++){
			scanf("%s%d%d%s%s%d",name, &grade1, &grade2, isF1, isF2, &num);
			stu[i]=Stu(name, grade1, grade2, isF1[0]=='Y'?1:0, isF2[0]=='Y'?1:0, num);
			sum+=stu[i].money;
		}
		int mxmoney=stu[0].money;
		int ind=0;
		for(int i=1;i<X;i++){
			if(mxmoney<stu[i].money){
				mxmoney=stu[i].money;
				ind=i;
			}
		}
		printf("%s\n%d\n%d\n",stu[ind].name,stu[ind].money,sum);
	}
	return 0;
}
