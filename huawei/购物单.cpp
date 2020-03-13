#include<cstdio>
#include<cstdlib>

struct Goods{
	int price;
	int level;
	int flag;
};

int N, m;
Goods goods[62];
int vis[62];
int pay, sum, ans;

void dfs(int t_sum){
	ans=ans>t_sum? ans: t_sum;
	for(int i=1; i<=m; i++){
		if(!vis[i]){
			if((!goods[i].flag || goods[i].flag && vis[goods[i].flag]) && pay+goods[i].price<=N){
				pay+=goods[i].price;
				sum+=goods[i].price*goods[i].level;
				vis[i]=1;
				dfs(sum);
				vis[i]=0;
				sum-=goods[i].price*goods[i].level;
				pay-=goods[i].price;
			}
		}
	}
}


int main(){
	scanf("%d%d", &N, &m);
	for(int i=1; i<=m; ++i){
		scanf("%d%d%d", &goods[i].price, &goods[i].level, &goods[i].flag);
	}
	dfs(0);
	printf("%d\n", ans);
	return 0;
}
