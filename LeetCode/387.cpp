class Solution {
public:
    int firstUniqChar(string s) {
        int nums[26]={0};
        for(char ch: s)
            nums[ch-'a']++;
        for(int i=0; i<s.size(); i++){
            if(nums[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
