#include<cstdio>
typedef long long LL;

LL a, b, c;
LL w[22][22][22];

int main(){
	for(int i=0; i<22; ++i)
		for(int j=0; j<22; ++j)
			for(int k=0; k<22; ++k)
				w[0][j][k]=w[j][0][k]=w[j][k][0]=1;
			
	for(int i=1; i<=20; ++i){
		for(int j=1; j<=20; ++j){
			for(int k=1; k<=20; ++k){
				if(i<j && j<k) w[i][j][k]=w[i][j][k-1]+w[i][j-1][k-1]-w[i][j-1][k];
				else w[i][j][k]=w[i-1][j][k]+w[i-1][j-1][k]+w[i-1][j][k-1]-w[i-1][j-1][k-1];
			}
		}
	}
	
	while(scanf("%lld%lld%lld", &a, &b, &c)){
		if(a==-1 && b==-1 && c==-1) break;
		if(a<=0 || b<=0 || c<=0) printf("w(%lld, %lld, %lld) = %lld\n", a,b,c,1);
		else if(a>20 || b>20 || c>20) printf("w(%lld, %lld, %lld) = %lld\n", a,b,c,w[20][20][20]);
		else if(a<b && b<c) printf("w(%lld, %lld, %lld) = %lld\n", a,b,c,w[a][b][c-1]+w[a][b-1][c-1]-w[a][b-1][c]);
		else printf("w(%lld, %lld, %lld) = %lld\n", a,b,c,w[a-1][b][c]+w[a-1][b-1][c]+w[a-1][b][c-1]-w[a-1][b-1][c-1]);
	}
	
	return 0;
}
