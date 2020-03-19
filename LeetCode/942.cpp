class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res;
        int l=0, r=S.size();
        for(int i=0; i<S.size(); i++){
            if(S[i]=='I') res.push_back(l++);
            else res.push_back(r--);
        }
        res.push_back(l);
        return res;
    }
};
