#include<stdio.h>
#include<algorithm>
#define MAXN 10005
using namespace std;
struct Interval{
	int a;
	int b;
}interval[MAXN];

bool cmp(Interval x, Interval y){
	return x.b<y.b;
}

int main(){
	int m;
	scanf("%d",&m);
	while(m--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d%d",&interval[i].a,&interval[i].b);
		} 
		sort(interval,interval+n,cmp);
		int cnt=0;
		int start=0;
		int j=0;
		while(j<n){
			if(interval[j].a>=start){
				cnt++;
				start=interval[j].b+1;
			}
			j++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}

