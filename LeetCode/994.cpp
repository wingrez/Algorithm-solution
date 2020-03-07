class Solution {
public:
    int dir[4][2]={{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    struct Node{
        int x;
        int y;
        int step;
        Node(int _x, int _y, int _step){
            x=_x; y=_y; step=_step;
        }
    };

    bool inArea(vector<vector<int> > &grid, int x, int y){
        int m=grid.size();
        int n=grid[0].size();
        return x>=0 && x<m && y>=0 && y<n;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        queue<Node> q;
        int maxMinute=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]==2){
                    q.push(Node(i, j, 0));
                }
            }
        }

        int maxStep=0;
        while(!q.empty()){
            int x=q.front().x;
            int y=q.front().y;
            int step=q.front().step;
            q.pop();
            maxStep=max(maxStep, step);

            for(int i=0; i<4; i++){
                int nx=x+dir[i][0];
                int ny=y+dir[i][1];
                if(inArea(grid, nx, ny) && grid[nx][ny]==1){
                    q.push(Node(nx, ny, step+1));
                    grid[nx][ny]=2;
                }
            }
        }

        int isStill=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]==1){
                    isStill=1;
                    break;
                }
            }
            if(isStill) break;
        }

        return isStill? -1: maxStep;

    }
};
