#include<cstdio>
#include<climits>

int N;

int main(){
	scanf("%d", &N);
	long long ans=0;
    while(N!=0){
        ans=ans*10+N%10;
        if(ans>INT_MAX || ans<INT_MIN){
        	printf("0\n");
        	return 0;
		}
        N/=10;
    }
    printf("%d\n", ans);
    return 0;
}
