#include<cstdio>

int s[5][5]={{0,0,1,1,0}, {1,0,0,1,0}, {0,1,0,0,1}, {0,0,1,0,1}, {1,1,0,0,0}};

int N, Na, Nb;
int a[202], b[202];

int main(){
	scanf("%d%d%d", &N, &Na, &Nb);
	for(int i=0; i<Na; ++i) scanf("%d", &a[i]);
	for(int i=0; i<Nb; ++i) scanf("%d", &b[i]);
	int sa=0, sb=0; //ตรทึ 
	for(int i=0; i<N; ++i){
		int an=i%Na, bn=i%Nb;
		if(s[a[an]][b[bn]]==1) ++sa;
		else if(s[b[bn]][a[an]]==1) ++sb;
	}
	printf("%d %d\n", sa, sb);
	return 0;
}
