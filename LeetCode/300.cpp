class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0) return 0;
        vector<int> memo(nums.size(), 1);
        for(int i=1; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j]){
                    memo[i]=max(memo[i], memo[j]+1);
                }
            }
        }

        int res=1;
        for(int i=0; i<memo.size(); i++){
            res=max(res, memo[i]);
        }

        return res;
    }
};
