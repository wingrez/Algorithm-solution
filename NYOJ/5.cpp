#include<stdio.h>
#include<string.h>
#define MAXN 1005

char A[MAXN],B[MAXN];
int f[MAXN];
int ans;

void getFail(char *P, int *f){
	int m=strlen(P);
	f[0]=f[1]=0;//递推边界初值
	for(int i=1;i<m;i++){
		int j=f[i];
		while(j && P[i]!=P[j]) j=f[j];
		f[i+1]= P[i]==P[j]? j+1: 0;
	}
}
 
int find(char *T, char *P, int *f){
	int n=strlen(T),m=strlen(P);
	getFail(P,f);
	int j=0;//当前结点编号，初始为0号结点 
	for(int i=0;i<n;i++){//文本串当前指针 
		while(j && P[j]!=T[i]) j=f[j];//顺着失配边走，直到可以匹配
		if(P[j]==T[i])j++;
		if(j==m) ans++;
	}
}


int main(){
	int N;
	scanf("%d",&N);
	while(N--){
		ans=0;
		scanf("%s%s",A,B);
		find(B,A,f);
		printf("%d\n",ans);
	}
	return 0;
}

