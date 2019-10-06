#include<cstdio>
#include<cstring>

int vis[10];

int solve(int d){
	while(d>0){
		if(vis[d%10]==1 || d%10==0) return 0;
		vis[d%10]=1;
		d/=10;
	}
	return 1;
}

int main(){
	for(int i=123; i<330; ++i){
		memset(vis, 0, sizeof(vis));
		int a=i, b=i*2, c=i*3;
		if(solve(a) && solve(b) && solve(c))
			printf("%d %d %d\n", a, b, c);
	}
	return 0;
}
