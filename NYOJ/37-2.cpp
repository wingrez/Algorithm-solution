#include<stdio.h>
#include<string.h>
#define MAXN 1005

char s1[MAXN];
char s2[MAXN];
int L[MAXN][MAXN];//L[i][j]：str1[0~i-1]和str2[0~j-1]的LCS长度

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%s",s1);
		int len=strlen(s1);
		for(int i=0;i<len;i++){
			s2[i]=s1[len-i-1];
		}
		s2[len]='\0';
		//求LCS长度 
		for(int i=0;i<len;i++){
			for(int j=0;j<len;j++){
				if(s1[i]==s2[j])
					L[i+1][j+1]=L[i][j]+1;
				else L[i+1][j+1]= L[i][j+1]>L[i+1][j]? L[i][j+1]: L[i+1][j];
			}
		}
		printf("%d\n",len-L[len][len]);
	}
	return 0;
}        

