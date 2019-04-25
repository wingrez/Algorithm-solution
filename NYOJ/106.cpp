#include<stdio.h>
#include<string.h>
#include<algorithm>
#define MAXN 15
using namespace std;
struct Stuff{
	int vpw;
	int w;
}stuff[MAXN];

bool cmp(Stuff a, Stuff b){
	return a.vpw>b.vpw;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int s,m;
		scanf("%d%d",&s,&m);
		for(int i=0;i<s;i++){
			scanf("%d%d",&stuff[i].vpw,&stuff[i].w);
		}
		sort(stuff,stuff+s,cmp);
		int ans=0;
		for(int i=0;i<s && m;i++){
			int j= (m>=stuff[i].w)?stuff[i].w:m;
			m-=j;
			ans+=j*stuff[i].vpw;
		}
		printf("%d\n",ans);
	}
	return 0;
}

