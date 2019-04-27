#include<cstdio>
#include<cmath>
#include<cstring>

bool isPrime(int num){
	if(num<=3) return num>1;
	if(num%6!=1 && num%6!=5) return false;
	int sq=(int)sqrt(num);
	for(int i=5; i<=sq;i+=6){
		if(num%i==0 || num%(i+2)==0)
			return false;
	}
	return true;
}

char word[105];
int dict[26];
int N;

int main(){
	scanf("%d",&N);
	getchar();
	while(N--){
		memset(dict, 0, sizeof(dict));
		gets(word);
		for(int i=0;i<strlen(word);i++){
			dict[word[i]-'a']++;
		}
		int mx=0;
		int mn=100;
		for(int i=0;i<26;i++){
			if(mx<dict[i]) mx=dict[i];
			if(dict[i]!=0 && mn>dict[i]) mn=dict[i];
		}
		if(isPrime(mx-mn)){
			printf("Lucky Word\n%d\n",mx-mn);
		}
		else{
			printf("No Answer\n0\n");
		}
	}
	return 0;
}
