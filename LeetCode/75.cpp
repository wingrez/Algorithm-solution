class Solution {
public:
    void sortColors(vector<int>& nums) {
        int k0=0, k2=nums.size()-1;
        int i=0;
        while(i<=k2){
            if(nums[i]==0){
                if(i!=k0) swap(nums[k0], nums[i]);
                k0++; i++;
            }
            else if(nums[i]==2) swap(nums[k2--], nums[i]);
            else i++;
        }
    }
};
