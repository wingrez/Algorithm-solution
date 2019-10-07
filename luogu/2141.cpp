#include<cstdio>
#include<set>
using namespace std;

const int MAXN=102;
const int MAX=100002;
int arr[MAXN];
int vis[MAX];
int n;


int main(){
	int sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%d", &arr[i]);
		vis[arr[i]]=1;
	}
	for(int i=0; i<n; ++i){
		for(int j=i+1; j<n; ++j){
			int t=arr[i]+arr[j];
			if(vis[t]==1){
				++sum; vis[t]=0;
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}
