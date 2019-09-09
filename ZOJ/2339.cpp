#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
typedef long long LL; 

priority_queue<LL, vector<LL>, greater<LL> > pq;

int main(){
	int N, n;
	scanf("%d",&N);
	while(N--){
		scanf("%d", &n);
		int d;
		while(n--){
			scanf("%d", &d);
			pq.push(d);
		}
		LL ans=0;
		LL a, b, sum;
		while(pq.size()>1){
			a=pq.top(); pq.pop();
			b=pq.top(); pq.pop();
			sum=a+b;
			ans+=sum;
			pq.push(sum);
		}
		pq.pop();
		printf("%lld\n", ans);
		if(N) printf("\n");
	}
	return 0;
}

