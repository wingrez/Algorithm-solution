#include<cstdio>
#include<cstring>

const int MAXN=1000;
int visit[MAXN+5];  
void Prime(){
    memset(visit,0,sizeof(visit));
    visit[0]=visit[1]=1;
    for(int i=2; i<=MAXN; i++) {
        if(!visit[i]){
            for(int j=i*i; j<=MAXN; j+=i) { 
                visit[j]=1;
            }
        }
    }
}

int M;
int N;

int main(){
	Prime();
	scanf("%d",&M);
	while(M--){
		scanf("%d",&N);
		int d;
		int sum=0;
		for(int i=0;i<N;i++){
			scanf("%d",&d);
			if(visit[d]==0) 
				sum+=d;
		}
		printf("%d\n",sum);
	}
	return 0;
}
