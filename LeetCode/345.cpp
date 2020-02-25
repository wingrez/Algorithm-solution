class Solution {
public:
    string reverseVowels(string s) {
        int l=0, r=s.size()-1;
        while(l<r){
            while(l<r && !(tolower(s[l])=='a' || tolower(s[l])=='o' || tolower(s[l])=='e' || tolower(s[l])=='i' || tolower(s[l])=='u')) l++;
            while(l<r && !(tolower(s[r])=='a' || tolower(s[r])=='o' || tolower(s[r])=='e' || tolower(s[r])=='i' || tolower(s[r])=='u')) r--;
            if(l==r) break;
            swap(s[l], s[r]);
            l++; r--;
        }
        return s;
    }
};
