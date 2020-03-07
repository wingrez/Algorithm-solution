class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()) return false;
        int np[26]={0}; //记录每个字母的下一个位置
        for(char ch: ransomNote){
            int i=magazine.find(ch, np[ch-'a']);
            if(i==string::npos) return false;
            np[ch-'a']=i+1;
        }
        return true;
    }
};
