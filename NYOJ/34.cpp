#include<cstdio>

int a,b,c;

int main(){
	scanf("%d%d%d", &a, &b, &c);
	for(int i=10;i<=100;i++){
		if(i%3==a && i%5==b && i%7==c){
			printf("%d\n", i);
			return 0;
		}
	}
	printf("No answer\n");
	return 0;
}
