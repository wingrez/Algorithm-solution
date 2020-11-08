class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int minn=arr[1]-arr[0];
        for(int i=1; i<arr.size(); i++){
            if(arr[i]-arr[i-1]<minn){
                minn=arr[i]-arr[i-1];
                res.clear();
                res.push_back({arr[i-1], arr[i]});
            }
            else if(arr[i]-arr[i-1]==minn){
                res.push_back({arr[i-1], arr[i]});
            }
        }
        return res;
    }
};
