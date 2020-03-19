class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        for(int i=0; i<matrix.size(); i++){
            int col=0;
            for(int j=1; j<matrix[i].size(); j++){
                if(matrix[i][col]>matrix[i][j]){
                    col=j;
                }
            }
            int flag=1;
            for(int j=0; j<matrix.size(); j++){
                if(matrix[i][col]<matrix[j][col]){
                    flag=0;
                    break;
                }
            }
            if(flag) res.push_back(matrix[i][col]);
        }
        return res;
    }
};
