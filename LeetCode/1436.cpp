class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> mp;
        for(const auto &v: paths){
            mp[v[0]]=v[1];
        }
        for(const auto &[k, v]: mp){
            if(mp.find(v)==mp.end())
                return v;
        }
        return "";
    }
};
