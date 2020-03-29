class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0;
        int L=0, R=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='L') L++;
            else if(s[i]=='R') R++;
            if(L==R){
                res++;
                L=R=0;
            }
        }
        return res;
    }
};
