#include<cstdio>

int x, n;

int main(){
	int sum=0;
	scanf("%d%d", &x, &n);
	while(n--){
		if(x==6) ++x;
		else if(x==7) x=1;
		else{
			sum+=250;
			++x;
		}
	}
	printf("%d\n", sum);
	return 0;
}
