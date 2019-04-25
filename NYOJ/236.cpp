#include<stdio.h>
#include<string.h>
#include<algorithm>
#define MAXN 5005
using namespace std;

struct Stick{
	int l;
	int w;
}stick[MAXN];

int has[MAXN];

bool cmp(Stick a, Stick b){
	if(a.l<b.l) return true;
	if(a.l==b.l && a.w<=b.w) return true;
	return false;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		memset(has,0,sizeof(has));
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d%d",&stick[i].l,&stick[i].w);
		}
		sort(stick,stick+N,cmp);
		int ans=0;
		for(int i=0;i<N;i++){
			if(has[i]==0){
				ans++;
				has[i]=1;
				int wei=stick[i].w;
				for(int j=i+1;j<N;j++){
					if(has[j]==0 && stick[j].w>=wei){
						wei=stick[j].w;
						has[j]=1;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}

