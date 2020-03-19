class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<int, int> mp;
        for(char ch: chars){
            mp[ch]++;
        }
        int res=0;
        for(string word: words){
            map<int, int> tmp(mp);
            int flag=1;
            for(char ch: word){
                if(tmp[ch]) tmp[ch]--;
                else{
                    flag=0; break;
                } 
            }
            if(flag) res+=word.size();
        }
        return res;
    }
};
