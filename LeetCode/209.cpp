class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l=0, r=0;
        int sum=0;
        int minn=nums.size()+1;
        while(r<nums.size()){
            while(r<nums.size() && sum<s){
                sum+=nums[r++];
            }
            if(sum>=s){
                do{
                    sum-=nums[l++];
                }
                while(sum>=s);
                minn=min(minn, r-l+1);
            }
        }
        if(minn==nums.size()+1) return 0;
        return minn;
    }
};
