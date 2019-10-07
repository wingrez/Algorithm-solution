#include<cstdio>

const int MAXN=102;
int arr[MAXN];

int main(){
	int i;
	for(i=0; ; ++i){
		scanf("%d", &arr[i]);
		if(arr[i]==0) break;
	}
	while(i--){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
