class Solution {
public:
    bool inArea(int i, int j, int m, int n){
        return i>=0 && i<m && j>=0 && j<n;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    if(inArea(i-1, j, m, n)) res+=(grid[i-1][j]==0);
                    else res++;
                    if(inArea(i, j+1, m, n)) res+=(grid[i][j+1]==0);
                    else res++;
                    if(inArea(i+1, j, m, n)) res+=(grid[i+1][j]==0);
                    else res++;
                    if(inArea(i, j-1, m, n)) res+=(grid[i][j-1]==0);
                    else res++;
                }
            }
        }
        return res;
    }
};
