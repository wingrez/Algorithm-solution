class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int> > res;
        for(int i=0; i<A[0].size(); i++){
            vector<int> row;
            for(int j=0; j<A.size(); j++){
                row.push_back(A[j][i]);
            }
            res.push_back(row);
        }
        return res;
    }
};
