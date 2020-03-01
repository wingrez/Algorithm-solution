class Solution {
public:
    int climbStairs(int n) {
        vector<int> vec{1, 1};
        for(int i=2; i<=n; i++){
            vec.push_back(vec[i-1]+vec[i-2]);
        } 
        return vec[n];
    }
};
