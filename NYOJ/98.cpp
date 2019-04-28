#include<cstdio>

int N;
int M;

int main(){
	scanf("%d",&N);
	while(N--){
		scanf("%d",&M);
		if(M>=90) printf("A\n");
		else if(M>=80) printf("B\n");
		else if(M>=70) printf("C\n");
		else if(M>=60) printf("D\n");
		else printf("E\n");
	}
	return 0;
}
