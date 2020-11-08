class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int curElem=0;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int c=0; c<n-1; c++){
            curElem=matrix[0][c];
            int i=1, j=c+1;
            while(i<m && j<n){
                if(curElem!=matrix[i][j])
                    return false;
                i++; j++;
            }
        }

        for(int r=1; r<m-1; r++){
            curElem=matrix[r][0];
            int i=r+1, j=1;
            while(i<m && j<n){
                if(curElem!=matrix[i][j])
                    return false;
                i++; j++;
            }
        }

        return true;
    }
};
