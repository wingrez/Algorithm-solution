class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> mp;
        for(const int &n: target){
            mp[n]++;
        }
        for(const int &n: arr){
            if(mp[n]==0) return false;
            mp[n]--;
        }
        for(const auto &[k,v]: mp){
            if(v) return false;
        }
        return true;
    }
};
