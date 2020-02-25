class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<int, int> record;
        for(int i=0; i<s.size(); ++i){
            record[s[i]]++;
        }
        for(int i=0; i<t.size(); ++i){
            if(record[t[i]]>0){
                record[t[i]]--;
            }
            else return false;
        }
        return true;
    }
};
