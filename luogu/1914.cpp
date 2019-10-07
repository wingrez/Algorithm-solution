#include<cstdio>

const int MAXN=52;
char str[MAXN];
int n;

int main(){
	scanf("%d%s", &n, str); 
	for(int i=0; str[i]; ++i){
		printf("%c", 'a'+(str[i]-'a'+n)%26);
	}
	return 0;
}
