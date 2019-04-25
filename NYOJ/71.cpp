#include<stdio.h>
#include<algorithm>
#define MAXN 305
using namespace std;
int man[MAXN];
int main(){
	int s;
	scanf("%d",&s);
	while(s--){
		int w,n;
		scanf("%d%d",&w,&n);
		for(int i=0;i<n;i++){
			scanf("%d",&man[i]);
		}
		sort(man,man+n);
		int ans=0;
		int j=0;
		for(int i=n-1;i>=j;i--){
			if(man[i]+man[j]<=w)
				j++;
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
