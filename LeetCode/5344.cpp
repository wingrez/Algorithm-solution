class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> copy(nums);
        sort(begin(copy), end(copy));
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            res.push_back(lower_bound(begin(copy), end(copy), nums[i])-begin(copy));
        }
        return res;
    }
};
