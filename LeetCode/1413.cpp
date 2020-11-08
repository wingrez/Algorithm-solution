class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int res=1;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum<1) res = res > 1-sum ? res : 1-sum; 
        }
        return res;
    }
};
