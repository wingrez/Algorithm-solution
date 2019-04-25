#include<stdio.h>
int main(){
	int N,n,d;
	scanf("%d",&N);
	while(N--){
		int prior,max;//prior是从A1到A(n-1)的最大子串和
		scanf("%d",&n);
		scanf("%d",&d);//先读入一个，方便给prior和max初始化
		prior=max=d;
		for(int i=1;i<n;i++){
			scanf("%d",&d);
			prior=d+prior>d?d+prior:d;
			max=max>prior?max:prior;
		}
		printf("%d\n",max);
	}
	return 0;
}

