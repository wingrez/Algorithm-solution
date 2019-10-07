#include<cstdio>

int N;

int main(){
	int ans=0, sum=0;
	int pre=-1, cur;
	scanf("%d", &N);
	for(int i=0; i<N; ++i){
		scanf("%d", &cur);
		if(cur>pre) ++sum;
		else{
			if(sum>ans) ans=sum;
			sum=1;
		}
		pre=cur;
	}
	printf("%d\n", ans);
	return 0;
}
