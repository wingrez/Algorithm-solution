#include<stdio.h>
int main()
{
	int s,n,m;
	int i,j;
	scanf("%d",&s);
	while(s--)
	{
		int cnt=0;
		scanf("%d%d",&n,&m);
		for(i=m;i<=n;i+=m)
		{
			int temp=i;
			while(temp%m==0)
			{
				temp/=m;
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}                

