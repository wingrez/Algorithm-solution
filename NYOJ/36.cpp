#include<stdio.h>
#include<string.h>
#define MAXN 1005
char str1[MAXN],str2[MAXN];
int L[MAXN][MAXN];//L[i][j]：str1[0~i-1]和str2[0~j-1]的LCS长度 
int main(){
    int N;
    int i,j;
    scanf("%d",&N);
    while(N--){
        memset(L,0,sizeof(L));
        scanf("%s%s",str1,str2);
        int len1=strlen(str1),len2=strlen(str2);
        for(i=0;i<len1;i++){
            for(j=0;j<len2;j++){
                if(str1[i]==str2[j])
                    L[i+1][j+1]=L[i][j]+1;
                else L[i+1][j+1]= L[i][j+1]>L[i+1][j] ? L[i][j+1] : L[i+1][j];
            }
        }
        printf("%d\n",L[len1][len2]);
    }
    return 0;
}

