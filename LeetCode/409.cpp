class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int res=0;
        int flag=0;
        for(map<char, int>::iterator it=mp.begin(); it!=mp.end(); it++){
            if(it->second&1){
                flag=1;
                res+=it->second-1;
            }
            else res+=it->second;
        }
        return res+flag;
    }
};
