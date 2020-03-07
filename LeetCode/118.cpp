class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > res;
        for(int i=0; i<numRows; i++){
            vector<int> cur;
            if(i==0){
                cur.push_back(1);
            }
            else if(i==1){
                cur.push_back(1);
                cur.push_back(1);
            }
            else{
                cur.push_back(1);
                for(int j=1; j<i; j++){
                   cur.push_back(res[i-1][j-1]+res[i-1][j]);
                }
                cur.push_back(1);
            }
            res.push_back(cur);
        }
        return res;
    }
};
