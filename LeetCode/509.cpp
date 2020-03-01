class Solution {
public:
    int fib(int N) {
        vector<int> memo{0, 1};
        for(int i=2; i<=N; i++){
            memo.push_back(memo[i-1]+memo[i-2]);
        }
        return memo[N];
    }
};
