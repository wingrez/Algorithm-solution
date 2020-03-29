class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        sort(begin(arr), end(arr));
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(arr[i]);
        }
        return res;
    }
};
