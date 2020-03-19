class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]=i;
        vector<string> res(nums.size());
        int k=nums.size();
        for(map<int, int>::iterator it=begin(mp); it!=end(mp); it++){
            if(k==3) res[it->second]="Bronze Medal";
            else if(k==2) res[it->second]="Silver Medal";
            else if(k==1) res[it->second]="Gold Medal";
            else res[it->second]=to_string(k);
            k--;
        }
        return res;
    }
};
