#include<cstdio>
#include<cctype>
#include<cstring>

int p1, p2, p3;
char str[102];

int main(){
	scanf("%d%d%d%s", &p1, &p2, &p3, str);
	int i=0;
	while(str[i]){
		if(i>0 && i+1<strlen(str) && str[i]=='-' && str[i-1]!='-' &&str[i+1]!='-'){
			char c2=str[i-1], c1=str[i+1];
			if(c1<=c2 || isdigit(c1) && isalpha(c2) || isalpha(c1) && isdigit(c2)) printf("-");
			else if(p3==1){
				char t1, t2;
				if(p1==1){ t1=tolower(c1);	t2=tolower(c2); }
				else if(p1==2){ t1=toupper(c1); t2=toupper(c2); }
				else { t1=c1; t2=c2; }
				while(++t2<t1){
					for(int i=0; i<p2; ++i){
						if(p1==3) printf("*");
						else printf("%c",t2);
					}
				}
			}
			else{
				char t1, t2;
				if(p1==1){ t1=tolower(c1);	t2=tolower(c2); }
				else if(p1==2){ t1=toupper(c1); t2=toupper(c2); }
				else { t1=c1; t2=c2; }
				while(--t1>t2){
					for(int i=0; i<p2; ++i){
						if(p1==3) printf("*");
						else printf("%c",t1);
					}
				}
			}
			i++;
		}
		
		printf("%c", str[i]);
		i++;
	}
	return 0;
}
