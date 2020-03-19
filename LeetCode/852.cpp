class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int i=1;
        while(i<A.size() && A[i]>A[i-1])
            i++;
        return i-1;
    }
};
