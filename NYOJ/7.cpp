#include<stdio.h>
#include<algorithm>
#define MAXN 25
using namespace std;
int x[MAXN];
int y[MAXN];
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%d%d",&x[i],&y[i]);
		}
		sort(x,x+m);
		sort(y,y+m);
		int ans=0;
		for(int i=0;i<m/2;i++){
			ans+=x[m-i-1]-x[i]+y[m-i-1]-y[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}        

