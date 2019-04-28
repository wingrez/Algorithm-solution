#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
typedef long long LL;

int N;
int n;
priority_queue<LL, vector<LL>, greater<LL> > pq;

int main() {
	scanf("%d",&N);
	while(N--) {
		
		while(!pq.empty()){
			pq.pop();
		}
		
		int d;
		scanf("%d",&n);
		for(int i=0; i<n; i++) {
			scanf("%d",&d);
			pq.push(d);
		}
		
		//每次选取最小的两个
		LL ans=0;
		LL mn1, mn2;
		if(pq.size()==1){
			ans=pq.top();
			pq.pop();
		}
		while(!pq.empty()) {
			mn1=pq.top(); pq.pop();
			if(pq.empty()) break;
			mn2=pq.top(); pq.pop();
			ans+=mn1+mn2;
			pq.push(mn1+mn2);
		}
		printf("%lld\n",ans);
	}
	return 0;
}
