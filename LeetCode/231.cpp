class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        long long nn=n;
        return (nn & (nn-1)) == 0;
    }
};
