#include<cstdio>

int arr[10];
int h;

int main(){
	for(int i=0; i<10; ++i){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &h);
	h+=30;
	int sum=0;
	for(int i=0; i<10; ++i){
		if(h>=arr[i]) sum++;
	}
	printf("%d\n", sum);
	return 0;
}
