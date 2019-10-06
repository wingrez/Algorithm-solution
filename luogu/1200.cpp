#include<cstdio>
#include<cstring>

char comet[10], team[10];

int cal(char *s){
	int ret=1;
	int len=strlen(s);
	for(int i=0;i<len;i++)
		ret*=(s[i]-'A'+1);
	return ret%47;
}

int main(){
	scanf("%s%s", comet, team);
	if(cal(comet)==cal(team)) printf("GO\n");
	else printf("STAY\n");
	return 0;
}
