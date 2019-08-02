class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        stringstream ss;
        string str;
        ss<<x;
        ss>>str;
        for(int i=0;i<str.size()/2;i++){
            if(str[i]!=str[str.size()-i-1])
                return false;
        }
        return true;
    }
};

