#include<cstdio>
#include<cmath>
#include<cstring>

const int MAXN=1000005;
bool isPrime(int num){
	if(num<=3) return num>1;
	if(num%6!=1 && num%6!=5) return false;
	int sq=(int)sqrt(num);
	for (int i=5; i<=sq;i+=6){
		if(num%i==0 || num%(i+2)==0)
			return false;
	}
	return true;
}

int N;
int M;

int main() {
	scanf("%d",&N);
	while(N--) {
		scanf("%d",&M);
		int l,r;
		l=r=M;
		for(int i=0; i<MAXN; i++) {
			if(l-i>=0 && isPrime(l-i)) {
				printf("%d %d\n", l-i, i);
				break;
			}
			if(r+i<MAXN && isPrime(r+i)) {
				printf("%d %d\n", r+i, i);
				break;
			}
		}
	}
	return 0;
}
