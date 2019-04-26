#include<cstdio>

int N;
int day[7];

int main(){
	scanf("%d",&N);
	while(N--){
		int t1, t2;
		for(int i=0;i<7;i++){
			scanf("%d%d",&t1,&t2);
			day[i]=t1+t2;
		}
		int mx=8;
		int d=0;
		for(int i=0;i<7;i++){
			if(day[i]>mx){
				mx=day[i];
				d=i+1;
			}
		}
		printf("%d\n",d);
	}
	return 0;
}
