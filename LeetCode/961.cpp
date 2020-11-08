class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int> mp;
        for(int a: A){
            mp[a]++;
            if(mp[a]>1) return a;
        }
        return -1;
    }
};
