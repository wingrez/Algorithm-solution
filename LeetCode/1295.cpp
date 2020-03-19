class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int num: nums){
            if((int)(log10(num)+1)%2==0)
                cnt++;
        }
        return cnt;
    }
};
