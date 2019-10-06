#include<cstdio>

int main(){
	int v;
	int has=0, store=0;
	for(int i=1; i<=12; ++i){
		scanf("%d", &v);
		has+=300;
		if(has-v<0){
			printf("-%d\n", i);
			return 0;
		}
		else if(has-v>=100){
			store+=(has-v)/100*100;
			has=(has-v)%100;
		}
		else{
			has=has-v;
		}
	}
	printf("%d\n", has+(int)(store*1.2));
	return 0;
}
