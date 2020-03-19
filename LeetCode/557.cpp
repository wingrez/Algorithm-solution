class Solution {
public:
    string reverseWords(string s) {
        string res="";
        stringstream ss(s);
        while(ss>>s){
            if(res.size()) res+=" ";
            reverse(begin(s), end(s));
            res+=s;
        }
        return res;
    }
};
