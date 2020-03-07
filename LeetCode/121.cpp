class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int minn=prices[0];
        int maxn=0;
        for(int i=1; i<prices.size(); i++){
            maxn=max(maxn, prices[i]-minn);
            minn=min(minn, prices[i]);
        }
        return maxn;
    }
};
