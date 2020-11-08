class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0, cnt=0, pre=0;
        int i=0;
        char val=s[0];
        while(i<s.size()){
            while(i<s.size() && s[i]==val){ cnt++; i++; }
            ans += min(cnt, pre);
            pre=cnt;
            cnt=0;
            val='0'+'1'-val;
        }

        return ans;
    }
};
