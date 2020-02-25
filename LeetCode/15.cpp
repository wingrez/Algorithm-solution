class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        set<vector<int>> res;
        for(int i=0; i<nums.size(); ++i){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1, r=nums.size()-1;
            while(l<r){
                if(nums[l]+nums[r]==-nums[i]){
                    res.insert(vector<int>{nums[i], nums[l], nums[r]});
                    l++; r--;
                }
                else if(nums[l]+nums[r]>-nums[i]) r--;
                else l++;
            }
        }
        vector<vector<int>> ret(begin(res), end(res));
        return ret;
    }
};
