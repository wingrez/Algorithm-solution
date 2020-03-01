class Solution {
public:
    static bool compare(const vector<int> &a, const vector<int> &b){
        if(a[0]!=b[0]) return a[0]<b[0];
        return a[1]<b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return 0;
        sort(intervals.begin(), intervals.end(), compare);
        //memo[i]表示使用intervals[0..i]的区间能构成的最长不重叠区间序列
        vector<int> memo(intervals.size(), 1);
        for(int i=1; i<intervals.size(); i++){
            for(int j=0; j<i; j++){
                if(intervals[i][0]>=intervals[j][1]){
                    memo[i]=max(memo[i], memo[j]+1);
                }
            }
        }

        int res=0;
        for(int i=0; i<memo.size(); i++){
            res=max(res, memo[i]);
        }

        return intervals.size()-res;
    }
};
