class Solution {
public:
    int dx[4]={0, -1, 0, 1};
    int dy[4]={1, 0, -1, 0};

    bool inArea(vector<vector<int>>& grid, int x, int y){
        int m=grid.size();
        int n=grid[0].size();
        return x>=0 && x<m && y>=0 && y<n;
    }

    int dfs(vector<vector<int>>& grid, int x, int y){
        int sum=1;
        grid[x][y]=0;
        for(int i=0; i<4; i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(inArea(grid, nx, ny) && grid[nx][ny]){
                sum+=dfs(grid, nx, ny);
            }
        }
        return sum;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]){
                    res=max(res, dfs(grid, i, j));
                }
            }
        }
        return res;
    }

