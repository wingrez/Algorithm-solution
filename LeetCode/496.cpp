class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        int n=nums2.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums2[j]>nums2[i]){
                    mp[nums2[i]]=nums2[j];
                    break;
                }
            }
        }

        vector<int> res(nums1.size());
        int p;
        for(int i=0; i<nums1.size(); i++){
            p=mp[nums1[i]];
            res[i]=p==0? -1: p;
        }

        return res;
    }
};
