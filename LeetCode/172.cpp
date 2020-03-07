class Solution {
public:
    // ans = n/5 + n/25 + n/125 + ...
    int trailingZeroes(int n) {
        int res=0;
        while(n){
            res+=n/5;
            n/=5;
        }
        return res;
    }
};
