#include<cstdio>

int main(){
	int N, M, v;
	int sum=0, cnt=0;
	scanf("%d%d", &N, &M);
	for(int i=0; i<N; ++i){
		scanf("%d", &v);
		if(sum+v<=M){
			sum+=v;
		}
		else{
			sum=v;
			cnt++;
		}
	}
	printf("%d\n", cnt+1);
	return 0;
}
