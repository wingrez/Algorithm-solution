#include<cstdio>

int main(){
	int cnt[26]={0};
	char ch;
	while((ch=getchar())!=EOF){
		if(ch>='A' && ch<='Z') ++cnt[ch-'A'];
	}
	
	int height=0;
	for(int i=0; i<26; ++i){
		if(cnt[i]>height) height=cnt[i];
	}
	
	for(int i=0; i<height; ++i){
		for(int j=0; j<26; ++j){
			if(j!=0) printf(" ");
			if(height-i<=cnt[j]) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	for(int i=0; i<26; ++i){
		if(i!=0) printf(" ");
		printf("%c", 'A'+i);
	}
	
	return 0;
}
