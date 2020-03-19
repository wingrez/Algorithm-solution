class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int row[n]={0};
        int col[m]={0};
        for(auto v: indices){
            row[v[0]]++;
            col[v[1]]++;
        }
        int res=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((row[i]+col[j])&1) res++;
            }
        }
        return res;
    }
};
