#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;

const int MAXN=100;
const char *T="yizhong";
char maze[MAXN][MAXN];
int flag[MAXN][MAXN];
int n;
stack<pair<int, int> > stk;

int dx[8]={0, -1, -1, -1, 0, 1, 1, 1};
int dy[8]={1, 1, 0, -1, -1, -1, 0, 1};

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%s", maze[i]);
	}
	int find;
	int cnt;
	int nx, ny;
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(maze[i][j]=='y'){
				find=0;
				for(int k=0; k<8; ++k){
					cnt=1;
					nx=i; ny=j;
					while(!stk.empty()) stk.pop();
					while(cnt<7){
						nx=nx+dx[k], ny=ny+dy[k];
						if(nx<0 || nx>=n || ny<0 || ny>=n) break;
						if(maze[nx][ny]==T[cnt]){
							stk.push(make_pair(nx, ny));
							flag[nx][ny]++;
							cnt++;
						}
						else break;
					}
					if(cnt==7) find=1;
					else while(!stk.empty()){
							nx=stk.top().first;
							ny=stk.top().second;
							flag[nx][ny]--;
							stk.pop();
						}
				}
				if(find) flag[i][j]++;
			}
		}
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(flag[i][j]) printf("%c", maze[i][j]);
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}
