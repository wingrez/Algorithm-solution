class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int cnt=1;
        for(int i=1; i<nums.size(); ++i){
            if(nums[i]!=nums[cnt-1])
                nums[cnt++]=nums[i];
        }
        return cnt;
    }
};
