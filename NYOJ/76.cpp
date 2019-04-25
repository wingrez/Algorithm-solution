#include<stdio.h>
int main()
{
	int n,m;
	int arr[45]={0,0,1,2};
	for(int i=4;i<45;i++)
	arr[i]=arr[i-1]+arr[i-2];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		printf("%d\n",arr[m]);
	}
	return 0;
}

