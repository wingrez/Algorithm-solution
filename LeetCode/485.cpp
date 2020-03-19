class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;
        int k=0;
        for(int v: nums){
            if(v) res=max(res, ++k);
            else k=0;
        }
        return res;
    }
};
