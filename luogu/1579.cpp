#include<cstdio>
#include<math.h>
#define MAXN 10000000+10
#define MAXP 700000

int vis[MAXN];//标记，1：合数，0：1或质数，初始化全0
int prime[MAXP];//存放质数,从0开始 

void sieve(int n){ //筛质数 
	int m=(int)sqrt(n+0.5);//避免浮点误差 
	for(int i=2;i<=m;i++){
		if(vis[i]==0){
			for(int j=i*i;j<=n;j+=i){
				vis[j]=i;
			} 
		}
	}
}

int prime_table(int n){ //生成1到n的质数表，返回质数个数
	sieve(n);
	int c=0;
	for(int i=2;i<=n;i++){
		if(vis[i]==0){
			prime[c++]=i;
		}
	}
	return c;
} 

int n;
int main(){
	scanf("%d", &n);
	int m=prime_table(n);
	for(int i=0; i<m; ++i){
		for(int j=0; j<m; ++j){
			for(int k=m-1; k>=0; --k){
				if(prime[i]+prime[j]+prime[k]==n){
					printf("%d %d %d\n", prime[i], prime[j], prime[k]);
					return 0;
				}
			}
		}
	}
	return 0;
}
