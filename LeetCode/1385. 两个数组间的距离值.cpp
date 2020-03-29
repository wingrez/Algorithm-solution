class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int res=0;
        for(int v: arr1){
            bool ok=1;
            int p=lower_bound(arr2.begin(), arr2.end(), v) - arr2.begin();
            if(p<arr2.size()) ok &= (arr2[p]-v>d);
            if(p-1>=0) ok &= (v-arr2[p-1]>d);
            res+=ok;
        }
        return res;
    }
};
