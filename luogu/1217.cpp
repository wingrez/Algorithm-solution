#include<cstdio>
#include<math.h>

//判断n是否是质数
int is_prime(int n) {
	if(n==2 || n==3 ) return 1 ;
	if(n%6!=1 && n%6!=5) return 0 ;
	int t=sqrt(n);
	for(int i=5; i<=t;i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;
}

int Palind[1000002];
int pnum=1;
int a, b;

int main() {
	scanf("%d%d", &a, &b);
	int i,j,k,p,q;

	for(i=1; i<=9; i+=2)
		Palind[pnum++]=i;
	
	if(b>10)
	for(i=1; i<=9; i+=2)
		Palind[pnum++]=11*i;
	
	if(b>100)
	for(i=1; i<=9; i+=2)
		for(j=0; j<=9; j++)
			Palind[pnum++]=101*i+10*j;
	
	if(b>1000)
	for(i=1; i<=9; i+=2)
		for(j=0; j<=9; j++)
			Palind[pnum++]=1001*i+110*j;
	
	if(b>10000)
	for(i=1; i<=9; i+=2)
		for(j=0; j<=9; j++)
			for(k=0; k<=9; k++)
				Palind[pnum++]=10001*i+1010*j+100*k;
				
	if(b>100000)
	for(i=1; i<=9; i+=2)
		for(j=0; j<=9; j++)
			for(k=0; k<=9; k++)
				Palind[pnum++]=100001*i+10010*j+1100*k;
	
	if(b>1000000)
	for(i=1; i<=9; i+=2)
		for(j=0; j<=9; j++)
			for(k=0; k<=9; k++)
				for(p=0; p<=9; p++)
					Palind[pnum++]=1000001*i+100010*j+10100*k+1000*p;
	
	if(b>10000000)					
	for(i=1; i<=9; i+=2)
		for(j=0; j<=9; j++)
			for(k=0; k<=9; k++)
				for(p=0; p<=9; p++)
					Palind[pnum++]=10000001*i+1000010*j+100100*k+11000*p;
	
	if(b>100000000)
	for(i=1; i<=9; i+=2)
		for(j=0; j<=9; j++)
			for(k=0; k<=9; k++)
				for(p=0; p<=9; p++)
					for(q=0; q<=9; q++)
						Palind[pnum++]=100000001*i+10000010*j+1000100*k+101000*p+10000*q;
				
	for(i=0;i<pnum;i++){
		if(Palind[i]>=a && Palind[i]<=b && is_prime(Palind[i])) 
			printf("%d\n", Palind[i]);
	}
	
	return 0;
}
