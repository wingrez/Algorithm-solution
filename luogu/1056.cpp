#include<cstdio>
#include<algorithm>
using namespace std;

int M, N, K, L, D;
int X, Y, P, Q;
struct Info{
	int pos=0;
	int cnt=0;
	bool operator < (const Info &rhs){
		return cnt>rhs.cnt;
	}
};
Info k[1002], l[1002];
bool cmp_cnt(const Info &lhs, const Info &rhs){
	return lhs.cnt>rhs.cnt;
}

bool cmp_pos(const Info &lhs, const Info &rhs){
	return lhs.pos<rhs.pos;
}

int main(){
	scanf("%d%d%d%d%d", &M, &N, &K, &L, &D);
	for(int i=0; i<D; ++i){
		scanf("%d%d%d%d", &X, &Y, &P, &Q);
		if(X>P) swap(X, P);
		if(Y>Q) swap(Y, Q);
		for(int j=X; j<P; ++j){
			k[j].pos=j;
			++k[j].cnt;
		}
		for(int j=Y; j<Q; ++j){
			l[j].pos=j;
			++l[j].cnt;
		}
	}
	sort(k,k+M, cmp_cnt); sort(l, l+N, cmp_cnt);
	sort(k,k+K, cmp_pos); sort(l, l+L, cmp_pos);
	for(int i=0; i<K; ++i){
		if(i!=0) printf(" ");
		printf("%d", k[i].pos);
	}
	printf("\n");
	for(int i=0; i<L; ++i){
		if(i!=0) printf(" ");
		printf("%d", l[i].pos);
	}
	printf("\n");
	return 0;
}
