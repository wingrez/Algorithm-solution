class Solution {
public:
    char findTheDifference(string s, string t) {
        int nums[26]={0};
        for(char ch: s){
            nums[ch-'a']++;
        }
        for(char ch: t){
            nums[ch-'a']++;
        }
        for(int i=0; i<26; i++){
            if(nums[i]&1) return i+'a';
        }
        return -1;
    }
};
