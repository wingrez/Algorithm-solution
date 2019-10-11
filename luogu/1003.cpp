#include<cstdio>
#define MAXN 10005

struct Blanket{
	int a, b, g, k;
};

Blanket blkt[MAXN]; 
int n;
int x, y;

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%d%d%d%d", &blkt[i].a, &blkt[i].b, &blkt[i].g, &blkt[i].k);
	}
	scanf("%d%d", &x, &y);
	for(int i=n-1; i>=0; --i){
		if(x>=blkt[i].a && x<=blkt[i].a+blkt[i].g && y>=blkt[i].b && y<=blkt[i].b+blkt[i].k){
			printf("%d\n", i+1);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
