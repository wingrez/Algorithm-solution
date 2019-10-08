#include<cstdio>

double s, x;

int main(){
	double sum=0;
	double v=7;
	scanf("%lf%lf", &s, &x);
	for(int i=0; ; ++i){
		if(i>0) v*=0.98;
		sum+=v;
		if(sum>=s-x){
			double st=(sum-s+x)/v;
			if((s+x-sum)/(0.98*v)+st<=1) printf("n\n");
			else  printf("y\n");
			return 0;
		}
	}
	return 0;
}
