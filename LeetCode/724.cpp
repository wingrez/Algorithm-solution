class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return -1;

        vector<int> sum(n+1);
        for(int i=0; i<n; i++){
            sum[i+1]=sum[i]+nums[i];
        }

        for(int i=0; i<n; i++){
            if(sum[i]==sum[n]-sum[i+1])
                return i;
        }

        return -1;
    }
};
