#include<cstdio>

int main(){
	double f;
	double ava=0;
	for(int i=0;i<12;i++){
		scanf("%lf",&f);
		ava+=f/12.0;
	}
	printf("%.2f",ava);
	return 0;
}
