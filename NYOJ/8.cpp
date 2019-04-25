#include<stdio.h>
#include<algorithm>
#define MAXN 1005
#define INF 0x3f3f3f3f

using namespace std;

struct Rec{
	int no;
	int len;
	int wid;
}rec[MAXN];

bool cmp(Rec a, Rec b){
	if(a.no==b.no){
		if(a.len==b.len) return a.wid<b.wid;
		return a.len<b.len;	
	}
	return a.no<b.no;
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m);
		for(int i=1;i<=m;i++){
			scanf("%d%d%d",&rec[i].no,&rec[i].len,&rec[i].wid);
			if(rec[i].len<rec[i].wid) swap(rec[i].len, rec[i].wid);
		}
		sort(rec+1,rec+m+1,cmp);
		rec[0].no=INF;
		for(int i=1;i<=m;i++){
			if(rec[i].no!=rec[i-1].no || rec[i].len!=rec[i-1].len || rec[i].wid!=rec[i-1].wid)
				printf("%d %d %d\n",rec[i].no,rec[i].len,rec[i].wid);
		}
	}
	return 0;
}

