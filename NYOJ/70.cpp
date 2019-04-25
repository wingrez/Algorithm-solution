#include<cstdio>
int main()
{
	int t;
	int n,m;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d",&n,&m);

		int cnt=0;
		for(int j=m;j<=n;j+=m)
		{
			int temp=j; 
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

