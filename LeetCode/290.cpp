class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<string, int> mp1;
        unordered_map<int, string> mp2;
        stringstream ss(str);
        string word;
        int n=0;
        while(ss>>word){ 
            if(n>=pattern.size()) return false;
            if(mp1.find(word)!=mp1.end() && mp1[word]!=pattern[n]) return false;
            else mp1[word]=pattern[n];
            if(mp2.find(pattern[n])!=mp2.end() && mp2[pattern[n]]!=word) return false;
            else mp2[pattern[n]]=word;
            n++;
        }
        if(n<pattern.size()) return false;
        return true;
    }
};
