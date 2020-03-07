class Solution {
public:
    int fib(int n) {
        vector<int> memo{0,1};
        for(int i=2; i<=n; i++){
            memo.push_back((memo[i-1]+memo[i-2])%1000000007);
        }
        return memo[n];
    }
};
