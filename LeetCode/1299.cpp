class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len=arr.size();
        int m=arr[len-1];
        arr[len-1]=-1;
        int t;
        for(int i=len-2; i>=0; i--){
            t=arr[i];
            arr[i]=m;
            m=max(m, t);
        }
        return arr;
    }
};
