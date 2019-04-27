#include<cstdio>

int a;
int n,m;

int main(){
	scanf("%d",&a);
	while(a--){
		scanf("%d%d",&n,&m);
		/*
		x+y=n;
		2x+4y=m;
		x=2*n-m/2;
		y=m/2-n;
		*/
		int x=2*n-m/2;
		int y=m/2-n;
		if(m%2!=0 || x<0 || y<0) printf("No answer\n");
		else printf("%d %d\n", x, y);
	}
	return 0;
}
