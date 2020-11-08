class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=nums[0]<nums[1]?nums[0]:nums[1];
        int b=nums[0]>nums[1]?nums[0]:nums[1];
        for(int i=2; i<nums.size(); i++){
            if(nums[i]>b){
                a=b;
                b=nums[i];
            }
            else if(nums[i]>a){
                a=nums[i];
            }
        }
        return (a-1)*(b-1);
    }
};
