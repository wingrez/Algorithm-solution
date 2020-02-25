class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i])
                if(i!=cnt) swap(nums[cnt++], nums[i]);
                else cnt++;
        }
    }
};
