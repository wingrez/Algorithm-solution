#include<cstdio>
#include<algorithm>
using namespace std;

struct Info{
	int num;
	int score;
	bool operator < (const Info& rhs) const{
		return score==rhs.score? num<rhs.num: score>rhs.score;
	}
};

const int MAXN=5005;
Info arr[MAXN];
int n, m;

int main(){
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; ++i){
		scanf("%d%d", &arr[i].num, &arr[i].score);
	}
	sort(arr, arr+n);
	m=m*1.5;
	
	int cnt=0;
	for(int i=0; arr[i].score>=arr[m-1].score; ++i){
		cnt++;
	}
	printf("%d %d\n", arr[m-1].score, cnt);
	for(int i=0; i<cnt; ++i){
		printf("%d %d\n", arr[i].num, arr[i].score);
	}
	return 0;
}
