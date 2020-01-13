#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

const int MAXN=21;
int M, N, K;
struct Point{
	int r, c;
	int num;
	bool operator < (const Point &rhs) const{
		return num>rhs.num;
	}
};
Point pts[MAXN*MAXN];

int calDis(Point p1, Point p2){
	return abs(p1.r-p2.r)+abs(p1.c-p2.c);
}

int main(){
	scanf("%d%d%d", &M, &N, &K);
	int num, cnt=0;
	for(int i=1; i<=M; ++i){
		for(int j=1; j<=N; ++j){
			scanf("%d", &num);
			pts[cnt].r=i; pts[cnt].c=j; pts[cnt].num=num;
			++cnt;
		}
	}
	sort(pts,pts+cnt);
	int ans=0;
	if(pts[0].r+1+pts[0].r<=K){
		ans+=pts[0].num;
		K=K-pts[0].r-1;
		for(int i=1; i<cnt; ++i){
			int dis=calDis(pts[i], pts[i-1]);
			if(dis+1+pts[i].r<=K){
				ans+=pts[i].num;
				K=K-dis-1;
			}
			else break;
		}
	} 
	
	printf("%d\n", ans);
	return 0;
}
