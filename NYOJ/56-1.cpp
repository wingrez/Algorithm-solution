#include<stdio.h>
#include<math.h>
int main()
{
	int s,n,m;
	int i,j;
	scanf("%d",&s);
	while(s--)
	{
		int ans=0;
		scanf("%d%d",&n,&m);
		while(n>0)
		{
			ans+=n/m;
			n/=m;
		}
		printf("%d\n",ans);
	}
	return 0;
}                        

