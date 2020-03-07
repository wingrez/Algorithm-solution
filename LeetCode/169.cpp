class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(cnt==0) candidate=nums[i];
            cnt+= nums[i]==candidate? 1 : -1;
        }
        return candidate;
    }
};
