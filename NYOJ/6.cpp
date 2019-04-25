#include<stdio.h>
#include<math.h>
#include<algorithm>
#define MAXN 605
using namespace std;
double arr[MAXN];
bool cmp(double a,double b){
	return a>b;
}
int main(){
	int m;
	scanf("%d",&m);
	while(m--){
		int n;
		scanf("%d",&n);
		int i,j;
		for(i=0;i<n;i++)
			scanf("%lf",&arr[i]);
		sort(arr,arr+n,cmp);
		int ans=0;
		double len=0;
		for(i=0;i<n;i++){
			if(arr[i]>1){
				len=len+(sqrt(arr[i]*arr[i]-1))*2;
				ans++;
				if(len>=20) break;
			}
			else break;
		}
		printf("%d\n",ans);
	}
	return 0;
}

