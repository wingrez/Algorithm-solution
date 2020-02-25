class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> has;
        vector<int> res;
        for(int i=0; i<nums1.size(); ++i){
            has.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); ++i){
            if(has.find(nums2[i])!=has.end()){
                has.erase(nums2[i]);
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
};
