class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum=(nums.size()+1)*nums.size()/2;
        for(int i=0; i<nums.size(); i++)
            sum-=nums[i];
        return sum;
    }
};
