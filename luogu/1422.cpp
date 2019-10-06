#include<cstdio>

int sum;

int main(){
	scanf("%d", &sum);
	double ans=0;
	if(sum<=150) ans+=sum*.4463;
	else if(sum<400) ans+=150*0.4463+(sum-150)*0.4663;
	else ans+=150*0.4463+250*0.4663+(sum-400)*0.5663;
	printf("%.1f\n", ans);
	return 0;
}
