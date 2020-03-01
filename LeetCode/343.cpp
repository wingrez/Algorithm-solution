class Solution {
public:
    vector<int> memo;

    int max3(int a, int b, int c){
        return max(a, max(b,c));
    }

    int breakInteger(int n){
        if(n==1) 
            return 1;
        if(memo[n]!=-1)
            return memo[n];
        int res=-1;
        for(int i=1; i<=n-1; i++){
            res=max3(res, i*(n-i), i*breakInteger(n-i));
        }
        return memo[n]=res;
    }

    int integerBreak(int n) {
        memo=vector<int>(n+1, -1);
        return breakInteger(n);
    }
};
