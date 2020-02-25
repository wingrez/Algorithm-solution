class Solution {
public:
    bool isPalindrome(string s) {
        int l=0, r=s.size()-1;
        while(l<r){
            while(l<r && !isalnum(s[l])) l++;
            while(l<r && !isalnum(s[r])) r--;
            if(l>=r) return true;
            if(toupper(s[l])!=toupper(s[r])) return false;
            l++; r--;
        }
        return true;
    }
};
