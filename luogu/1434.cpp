#include<cstdio>

const int MAXN=105;
int arr[MAXN][MAXN];
int maxLen[MAXN][MAXN];
int dx[4]= {1,0,-1,0};
int dy[4]= {0,-1,0,1};
int m,n;

int getMaxLen(int x,int y) {
	if(maxLen[x][y]!=0) return maxLen[x][y];
	int curlen=0;
	for(int i=0; i<4; i++) {
		int nx=x+dx[i],ny=y+dy[i];
		if(nx>=0 && nx<m && ny>=0 && ny<n && arr[nx][ny]<arr[x][y]) {
			curlen=getMaxLen(nx,ny)+1;
			if(maxLen[x][y]<curlen)
				maxLen[x][y]=curlen;
		}
	}
	return maxLen[x][y];
}

int main() {
	scanf("%d%d",&m,&n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}

	int ans=0, len;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(maxLen[i][j]==0) {
				len=getMaxLen(i,j);
				if(ans<len)
					ans=len;
			}
		}
	}
	
	printf("%d\n",ans+1);
	return 0;
}
