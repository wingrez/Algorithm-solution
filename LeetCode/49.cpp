class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> record;
        string t;
        for(int i=0; i<strs.size(); ++i){
            t=strs[i];
            sort(begin(t), end(t));
            record[t].push_back(strs[i]);
        }
        vector<vector<string>> ret;
        for(auto it=begin(record); it!=end(record); ++it){
            ret.push_back(it->second);
        }
        return ret;
    }
};
