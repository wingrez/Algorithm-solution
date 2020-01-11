#include<cstdio>
#include<cmath>

const int MAXN=10000;
int S11A, S11B, res11[MAXN][2], cnt11;
int S21A, S21B, res21[MAXN][2], cnt21;

int main(){
	char ch;
	while((ch=getchar()) && ch!='E'){
		if(ch==' ' || ch=='\n') continue;
		if(ch=='W'){
			S11A++;
			S21A++;
		}
		else if(ch=='L'){
			S11B++;
			S21B++;
		}
		if((S11A>=11 || S11B>=11) && abs(S11A-S11B)>=2){
			res11[cnt11][0]=S11A; res11[cnt11][1]=S11B;
			cnt11++;
			S11A=S11B=0;
		}
		if((S21A>=21 || S21B>=21) && abs(S21A-S21B)>=2){
			res21[cnt21][0]=S21A; res21[cnt21][1]=S21B;
			cnt21++;
			S21A=S21B=0;
		}
	}
	res11[cnt11][0]=S11A; res11[cnt11][1]=S11B;
	cnt11++;
	res21[cnt21][0]=S21A; res21[cnt21][1]=S21B;
	cnt21++;

	for(int i=0; i<cnt11; ++i){
		printf("%d:%d\n", res11[i][0], res11[i][1]);
	}
	printf("\n");
	for(int i=0; i<cnt21; ++i){
		printf("%d:%d\n", res21[i][0], res21[i][1]);
	}
	return 0;
}
