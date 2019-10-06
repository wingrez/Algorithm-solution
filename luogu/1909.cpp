#include<cstdio>
#include<cmath>

const int MAXN=0x3f3f3f3f;
int n;
int num, price;

int main(){
	scanf("%d", &n);
	int minn=MAXN;
	for(int i=0; i<3; i++){
		scanf("%d%d", &num, &price);
		int res=ceil(n*1.0/num)*price;
		if(res<minn) minn=res;
	}
	printf("%d\n", minn);
	return 0;
}
