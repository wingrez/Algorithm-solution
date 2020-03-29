class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int res=0;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j]=='R'){
                    for(int x=i-1; x>=0; x--){
                        if(board[x][j]=='.') continue;
                        if(board[x][j]=='p') res++;
                        break;
                    }
                    for(int x=i+1; x<board.size(); x++){
                        if(board[x][j]=='.') continue;
                        if(board[x][j]=='p') res++;
                        break;
                    }
                    for(int y=j-1; y>=0; y--){
                        if(board[i][y]=='.') continue;
                        if(board[i][y]=='p') res++;
                        break;
                    }
                    for(int y=j+1; y<board[i].size(); y++){
                        if(board[i][y]=='.') continue;
                        if(board[i][y]=='p') res++;
                        break;
                    }
                    return res;
                }
            }
        }
        return 0;
    }
};
