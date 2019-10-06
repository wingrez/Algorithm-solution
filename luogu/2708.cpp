#include<cstdio>
#include<cstring>
const int MAXN=10005;
char str[MAXN];

int main(){
	gets(str);
	int len=strlen(str);
	int ans=0;
	str[len]='1'; str[len+1]=0;
	for(int i=0; i<len; ++i){
		if(str[i]=='1' && str[i+1]=='0') ++ans;
		if(str[i]=='0' && str[i+1]=='1') ++ans;
	}
	printf("%d\n", ans);
	return 0;
}
