class Solution {
public:
    bool checkRecord(string s) {
        int An=0, Ln=0;
        int i=0;
        while(i<s.size()){
            if(s[i]=='A') An++;
            else if(s[i]=='L'){
                int cnt=1;
                while(i+1<s.size() && s[i+1]=='L'){
                    i++; cnt++;
                }
                Ln=max(Ln, cnt);
            }
            i++;
        }
        return An<=1 && Ln<=2;
    }
};
