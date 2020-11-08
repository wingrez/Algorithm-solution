class Solution {
public:
    int xorOperation(int n, int start) {
        int res=0;
        for(int i=1; i<n; i++){
            res^=(0+2*i);
        }
        return res;
    }
};
