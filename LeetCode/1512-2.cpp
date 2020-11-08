class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int num: nums){
            mp[num]++;
        }
        int res=0;
        for(auto [k, v]: mp){
            res+=v*(v-1)/2;
        }
        return res;
    }
};
