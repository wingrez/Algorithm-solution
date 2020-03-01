class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cnt(101, 0);
        for(int i=0; i<nums.size(); i++){
            cnt[nums[i]]++;
        }
        vector<int>  p(101, 0);
        for(int i=1; i<=100; i++){
            p[i]=p[i-1]+cnt[i-1];
        }
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            res.push_back(p[nums[i]]);
        }
        return res;
    }
};
