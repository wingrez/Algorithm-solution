class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g), end(g), greater<int>());
        sort(begin(s), end(s), greater<int>());
        int res=0;
        int si=0, gi=0;
        while(si<s.size() && gi<g.size()){
            if(s[si]>=g[gi]){
                res++;
                si++;
                gi++;
            }
            else
                gi++;
        }
        return res;
    }
};
