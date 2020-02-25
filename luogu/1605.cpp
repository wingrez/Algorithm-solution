#include<iostream>
#include<set>
using namespace std;

int N, M;
int T;
int sx, sy;
int fx, fy;
set<pair<int, int> > obstc;
int vis[6][6];
int dx[4]={0,-1,0,1};
int dy[4]={1,0,-1,0};
int ans;

void dfs(int x, int y){
	if(x==fx && y==fy){
		ans++;
		return;
	}
	for(int i=0; i<4; ++i){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>0 && nx<=N && ny>0 && ny<=M && vis[nx][ny]==0 && obstc.find(make_pair(nx,ny))==obstc.end()){
			vis[nx][ny]=1;
			dfs(nx,ny);
			vis[nx][ny]=0;
		}
	}
}

int main(){
	cin>>N>>M>>T;
	cin>>sx>>sy;
	cin>>fx>>fy;
	int x, y;
	for(int i=0; i<T; ++i){
		cin>>x>>y;
		obstc.insert(make_pair(x, y));
	}
	if(obstc.find(make_pair(fx,fy))!=obstc.end()){
		cout<<0<<endl;
	}
	else{
		vis[sx][sy]=1;
		dfs(sx, sy);
		cout<<ans<<endl;
	}
	return 0;
}
