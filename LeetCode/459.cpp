class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        int next[n+1];
        next[0]=-1;
        int i=0, j=-1;
        while(i<n){
            if(j==-1 || s[i]==s[j]) next[++i]=++j;
            else j=next[j];
        }
        if(next[n] && n%(n-next[n])==0) return true;
        return false;
    }
};
