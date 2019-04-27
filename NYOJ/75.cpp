#include<cstdio>
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int N;
int y,m,d;
int main(){
	scanf("%d",&N);
	while(N--){
		scanf("%d%d%d",&y,&m,&d);
		if(y%4==0 && y%100!=0 || y%400==0){
			days[1]=29;
		}
		else days[1]=28;
		int ans=0;
		for(int i=0;i<m-1;i++){
			ans+=days[i];
		}
		ans+=d;
		printf("%d\n",ans);
	}
	return 0;
}
