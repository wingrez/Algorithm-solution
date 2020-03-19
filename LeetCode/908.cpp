class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int maxn=*max_element(A.begin(), A.end());
        int minn=*min_element(A.begin(), A.end());
        if(maxn-minn<=2*K) return 0;
        return maxn-K-minn-K;
    }
};
