#include<cstdio>
#include<queue>
using namespace std;

const int MAXN=55;
int N, M;
int maze[MAXN][MAXN];
int vis[MAXN][MAXN];
int sx, sy, ex, ey;
char sd;
int dx[4]={0, 1, 0, -1};
int dy[4]={1, 0, -1, 0};

struct Node{
	int dir;
	int x, y;
	int cnt;
	int over; // if over equals 1, not to add 3 directions to queue.
	Node(int _x=0, int _y=0, int _cnt=0, int _dir=0, int _over=0){
		x=_x; y=_y; cnt=_cnt; dir=_dir; over=_over;
	}
};

bool go(int dir, int step, int x, int y, int &nx, int &ny){
	nx=x; ny=y;
	for(int i=1; i<=step; i++){
		nx+=dx[dir];
		ny+=dy[dir];
		if(!(nx>0 && nx<N && ny>0 && ny<M) || maze[nx][ny]==1)
			return false;
	}
	if(vis[nx][ny]==0){
		vis[nx][ny]=1;
		return true;
	}
	return false;
}

int main(){
	int val;
	scanf("%d%d", &N, &M);
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			scanf("%d", &val);
			if(val)	maze[i][j]=maze[i][j+1]=maze[i+1][j]=maze[i+1][j+1]=1;
		}
	}
	scanf("%d%d%d%d %c", &sx, &sy, &ex, &ey, &sd);
	
	if(sx==ex && sy==ey){
		printf("0");
		return 0;
	}
	
	int dir;
	if(sd=='E') dir=0;
	else if(sd=='S') dir=1;
	else if(sd=='W') dir=2;
	else dir=3;
	
	queue<Node> que;
	que.push(Node(sx, sy, 0, dir, 0));
	vis[sx][sy]=1;
	
	Node cur;
	int nx, ny;
	int flag=-1;
	while(!que.empty()){
		cur=que.front(); que.pop();
		if(go(cur.dir, 1, cur.x, cur.y, nx, ny)){
			if(nx==ex && ny==ey){
				flag=cur.cnt+1; break;
			}
			que.push(Node(nx, ny, cur.cnt+1, cur.dir, 0));
		}
		if(go(cur.dir, 2, cur.x, cur.y, nx, ny)){
			if(nx==ex && ny==ey){
				flag=cur.cnt+1; break;
			}
			que.push(Node(nx, ny, cur.cnt+1, cur.dir, 0));
		}
		if(go(cur.dir, 3, cur.x, cur.y, nx, ny)){
			if(nx==ex && ny==ey){
				flag=cur.cnt+1; break;
			}
			que.push(Node(nx, ny, cur.cnt+1, cur.dir, 0));
		}
		if(cur.over==0){
			que.push(Node(cur.x, cur.y, cur.cnt+1, (cur.dir+1)%4, 1));
			que.push(Node(cur.x, cur.y, cur.cnt+1, (cur.dir-1+4)%4, 1));
			que.push(Node(cur.x, cur.y, cur.cnt+2, (cur.dir+2)%4, 1));
		}
		
	}
	
	printf("%d\n", flag);
	return 0;
}
