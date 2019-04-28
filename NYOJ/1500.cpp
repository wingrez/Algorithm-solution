#include<cstdio>

int n,m;

int main(){
	while(~scanf("%d%d",&n,&m)){
		for(int i=0;i<n;i++){
			if(i==0 || i==n/2 || i==n-1){
				for(int j=0;j<m;j++){
					printf("*");
				}
				printf("\n");
			}
			else{
				for(int j=0;j<m;j++){
					if(j==0 || j==m/2 || j==m-1){
						printf("*");
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}
