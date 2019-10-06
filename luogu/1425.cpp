#include<cstdio>
int a, b, c, d;
int main(){
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(d<b){
		c-=1; 
		d+=60;
	}
	printf("%d %d\n", c-a, d-b);
	return 0;
}
