class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        int i, j;
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(grid[i][j]<0){
                    cnt+=n-j;
                    break;
                }
            }
        }
        return cnt;
    }
};
