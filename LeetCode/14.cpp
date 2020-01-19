class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string t="";
        if(strs.size()==0) return t;
        for(int i=0; i<strs[0].size(); ++i){
            for(int j=1; j<strs.size(); ++j){
                if(strs[0][i]!=strs[j][i]) return t;
            }
            t+=strs[0][i];
        }
        return t;
    }
};
