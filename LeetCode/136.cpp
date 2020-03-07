class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int v=0;
        for(int i=0; i<nums.size(); i++){
            v^=nums[i];
        }
        return v;
    }
};
