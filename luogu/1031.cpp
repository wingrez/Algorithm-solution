#include<cstdio>

const int MAXN=100;
int N;
int card[MAXN];

int main(){
	scanf("%d", &N);
	int tot=0, ave=0;
	for(int i=0; i<N; ++i){
		scanf("%d", &card[i]);
		tot+=card[i];
	}
	ave=tot/N;
	int cnt=0;
	for(int i=0; i<N-1; ++i){
		if(card[i]!=ave){
			card[i+1]+=card[i]-ave;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
