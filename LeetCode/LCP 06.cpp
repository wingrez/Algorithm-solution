class Solution {
public:
    int minCount(vector<int>& coins) {
        int res=0;
        for(int i=0; i<coins.size(); i++){
            res+=(int)ceil(coins[i]/2.0);
        }
        return res;
    }
};
