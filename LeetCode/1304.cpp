class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        if(n&1){
            res.push_back(0);
            n--;
        }
        for(int i=1; i<=n; i+=2){
            res.push_back(i);
            res.push_back(-i);
        }
        return res;
    }
};
