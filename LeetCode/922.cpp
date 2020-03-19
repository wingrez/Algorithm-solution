class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i=0, j=1;
        vector<int> res(A.size());
        for(int v: A){
            if(v&1){
                res[j]=v;
                j+=2;
            }
            else{
                res[i]=v;
                i+=2;
            }
        }
        return res;
    }
};
