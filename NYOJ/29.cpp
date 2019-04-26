#include<cstdio>

int n;
int mat[3][3];

int main(){
	scanf("%d", &n);
	while(n--){
		int d;
		for(int i=0;i<9;i++){
			scanf("%d",&d);
			mat[i%3][i/3]=d;
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("%d ",mat[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;	
}
