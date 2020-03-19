class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int res=0;
        for(int j=0; j<A[0].size(); j++){
            int flag=0;
            for(int i=1; i<A.size(); i++){
                if(A[i][j]<A[i-1][j]){
                    flag=1;
                    break;
                }
            }
            if(flag) res++;
        }
        return res;
    }
};
