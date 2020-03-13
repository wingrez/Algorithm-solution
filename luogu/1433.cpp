#include<iostream>
#include<cfloat>
#include<cmath>
using namespace std;
const int MAXN=17;

int n;
double x[MAXN], y[MAXN];
double dis[MAXN][MAXN];
bool vis[MAXN];
double res=DBL_MAX;

void dfs(int now, int step, double much){ //now是当前点的序号 
	if(much>=res) return;
	if(step==n){
		res=much;
		return;
	}
	for(int i=1; i<=n; i++){
		if(vis[i]) continue; 
		vis[i]=true;
		dfs(i, step+1, much+dis[now][i]);
		vis[i]=false;
	}
}

int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%lf%lf", &x[i], &y[i]);
	}
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++){
			dis[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	dfs(0, 0, 0);
	printf("%.2f\n", res);
	return 0;
}
