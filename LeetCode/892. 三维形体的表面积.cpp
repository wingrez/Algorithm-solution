class Solution {
public:
    int left(vector<vector<int>>& grid, int i, int j){
        if(j==0) return 0;
        return min(grid[i][j-1], grid[i][j]);
    }

    int right(vector<vector<int>>& grid, int i, int j){
        if(j==grid[i].size()-1) return 0;
        return min(grid[i][j+1], grid[i][j]);
    }

    int up(vector<vector<int>>& grid, int i, int j){
        if(i==0) return 0;
        return min(grid[i-1][j], grid[i][j]);
    }

    int down(vector<vector<int>>& grid, int i, int j){
        if(i==grid.size()-1) return 0;
        return min(grid[i+1][j], grid[i][j]);
    }


    int surfaceArea(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]==0) continue;
                ans+=grid[i][j]*4+2;
                ans-=left(grid, i, j);
                ans-=right(grid, i, j);
                ans-=up(grid, i, j);
                ans-=down(grid, i, j);
            }
        }
        return ans;
    }
};
