class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> record(begin(nums1), end(nums1));
        set<int> recordSet;
        for(int i=0; i<nums2.size(); ++i){
            if(record.find(nums2[i])!=record.end()){
                recordSet.insert(nums2[i]);
            }
        }
        return vector<int>(begin(recordSet), end(recordSet));
    }
};
