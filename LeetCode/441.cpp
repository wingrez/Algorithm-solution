class Solution {
public:
    int arrangeCoins(int n) {
        long long i;
        for(i=0; i*(1+i)/2<=n; i++);
        return i-1;
    }
};
