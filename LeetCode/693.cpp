class Solution {
public:
    bool hasAlternatingBits(int n) {
        int k=n&1;
        n>>=1;
        while(n){
           if(k==(n&1)) return false;
           k=1-k;
           n>>=1; 
        }
        return true;
    }
};
