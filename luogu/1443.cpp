#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;

const int maxn=400+5;
int arr[maxn][maxn],vis[maxn][maxn];
int tx[8]={-2,-2,2,2,-1,-1,1,1},
	ty[8]={-1,1,-1,1,-2,2,-2,2};
	
int n,m;
int posx,posy;
queue<int> dotx,doty;

void bfs(int x,int y)
{
	dotx.push(x);
	doty.push(y);
	arr[x][y]=0;
	vis[x][y]=1;
	
	while(!dotx.empty())
	{
		int x=dotx.front();
		int y=doty.front();
		
		dotx.pop();
		doty.pop();
		
		for(int i=0;i<8;i++)
		{
			int nx=x+tx[i],ny=y+ty[i];
			if(nx>=0 && nx<n && ny>=0 && ny<m && vis[nx][ny]==0)
			{
				vis[nx][ny]=1;
				arr[nx][ny]=arr[x][y]+1;
				
				dotx.push(nx);
				doty.push(ny);
			}
		}
	}
}

int main()
{
	scanf("%d%d%d%d",&n,&m,&posx,&posy);
	for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            arr[i][j]=-1;
            
	posx-=1;
	posy-=1;
	bfs(posx,posy);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			printf("%-5d",arr[i][j]);
		printf("\n");
	}
	return 0;
}

