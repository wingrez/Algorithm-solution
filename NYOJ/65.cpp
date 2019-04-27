#include<cstdio>

int a;
int n;
int arr[25];

int main(){
	arr[1]=1;
	for(int i=2;i<=20;i++){
		if((i&1)==0) arr[i]=arr[i-1]; 
		else arr[i]=i*arr[i-2];
	}
	scanf("%d",&a);
	while(a--){
		scanf("%d",&n);
		int sum=0;
		for(int i=1;i<=n;i++){
			sum+=arr[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
