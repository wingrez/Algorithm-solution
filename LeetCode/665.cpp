class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int cnt=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i]){
                if(i-2>=0 && nums[i-2]>nums[i]) nums[i]=nums[i-1];
                else nums[i-1]=nums[i];
                cnt++;
            }
            if(cnt>1) break;
        }
        return cnt<=1;
    }
};
