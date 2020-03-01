class Solution {
public:
    vector<int> memo;

    int max3(int a, int b, int c){
        return max(a, max(b,c));
    }

    int integerBreak(int n) {
        //memo[i]表示将数字i分割（至少分割成两部分）后得到的最大乘积
        memo=vector<int>(n+1, -1);
        memo[1]=1;
        for(int i=2; i<=n; i++){
            for(int j=1; j<=i-1; j++){
                //j + (i-j)
                memo[i]=max3(memo[i], j*(i-j), j*memo[i-j]);
            }
        }
        return memo[n];
    }
};
