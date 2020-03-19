class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res(A.size());
        int p=A.size()-1;
        int l=0, r=A.size()-1;
        while(l<=r){
            if(abs(A[l])<abs(A[r])){
                res[p--]=A[r]*A[r];
                r--;
            }
            else{
                res[p--]=A[l]*A[l];
                l++;
            }
        }
        return res;
    }
};
