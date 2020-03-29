class Solution {
public:
    int dx[4]={0, 1, 0, -1};
    int dy[4]={1, 0, -1, 0};

    bool vis[102][102];

    bool inArea(int x, int y, int N){
        return x>=0 && x<N && y>=0 && y<N;
    }

    void bfs(vector<vector<int>>& grid, int x, int y){
        queue<pair<int, int> > coor;
        queue<int> step;
        coor.push(make_pair(x, y));
        step.push(0);
        while(!coor.empty()){
            int x=coor.front().first;
            int y=coor.front().second;
            int st=step.front();
            coor.pop();
            step.pop();
            for(int i=0; i<4; i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(inArea(nx, ny, grid.size()) && grid[nx][ny]<1 && vis[nx][ny]==false){
                    if(grid[nx][ny]==0 || st+1<-grid[nx][ny]){
                        grid[nx][ny]=-(st+1);
                        vis[nx][ny]=true;
                        coor.push(make_pair(nx, ny));
                        step.push(st+1);
                    }
                }
            }
        }

    }

    int maxDistance(vector<vector<int>>& grid) {
        int N=grid.size();
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(grid[i][j]==1){
                    memset(vis, 0, sizeof(vis));
                    bfs(grid, i, j);
                }
            }
        }

        int maxn=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(maxn<-grid[i][j]){
                    maxn=-grid[i][j];
                }
            }
        }

        return maxn==0? -1: maxn;
    }
};
