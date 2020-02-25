class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word="";
        while(ss>>word);
        if(word=="") return 0;
        return word.size();
    }
};
