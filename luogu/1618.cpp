#include<cstdio>
#include<cstring>

int A, B, C;
int vis[10];

int main(){
	scanf("%d%d%d", &A, &B, &C);
	int flag=0;
	for(int i=1; i<=9; ++i){
		for(int j=1; j<=9; ++j){
			for(int k=1; k<=9; ++k){
				int a=i*100+j*10+k, b=a*B/A, c=a*C/A;
				memset(vis, 0, sizeof(vis));
				vis[i]++; vis[j]++; vis[k]++;
				vis[b%10]++; vis[b/10%10]++; vis[b/100]++;
				vis[c%10]++; vis[c/10%10]++; vis[c/100]++;
				int p;
				for(p=1; p<=9; ++p){
					if(vis[p]!=1) break;
				}
				if(p==10){
					printf("%d %d %d\n", a, b, c);
					flag=1;
				}
			}
		}
	}
	if(flag==0) printf("No!!!\n");
	return 0;
}
