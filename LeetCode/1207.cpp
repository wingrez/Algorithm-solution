class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp1, mp2;
        for(int v: arr){
            mp1[v]++;
        }
        for(auto it=mp1.begin(); it!=mp1.end(); it++){
            if(mp2[it->second]>0) return false;
            mp2[it->second]++;
        }
        return true;
    }
};
