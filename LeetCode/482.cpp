class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string T="";
        int cnt=0;
        for(int i=S.size()-1; i>=0; i--){
            if(S[i]!='-'){
                if(cnt==K){
                    cnt=0;
                    T.append(1, '-');
                }
                T.append(1, toupper(S[i]));
                cnt++;
            }
        }
        reverse(begin(T), end(T));
        return T;
    }
};
