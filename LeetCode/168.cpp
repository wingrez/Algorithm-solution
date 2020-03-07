class Solution {
public:
    string convertToTitle(int n) {
        string res="";
        while(n){
            res.append(1, (n-1)%26+'A');
            n=(n-1)/26;
        }
        reverse(begin(res), end(res));
        return res;
    }
};
