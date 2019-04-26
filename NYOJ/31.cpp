#include<cstdio>

int mn=10000;
int mx=0;

int main(){
	int d;
	for(int i=0;i<5;i++){
		scanf("%d",&d);
		if(d<mn) mn=d;
		if(d>mx) mx=d;
	}
	printf("%d %d\n", mn, mx);
	return 0;
}
