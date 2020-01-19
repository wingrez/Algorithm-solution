#include<cstdio>
int main()
{
	int t;
	int n,m;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d",&n,&m);

		int ans=0;
		while(n>0)
		{
			ans+=n/m;
			n/=m;
		}
		printf("%d\n",ans);
	}
	return 0;
}        

