class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int tot=1, k=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                if(k<2){
                    nums[tot++]=nums[i];
                    k++;
                }
            }
            else {
                nums[tot++]=nums[i];
                k=1;
            }
        }
        return tot;
    }
};
