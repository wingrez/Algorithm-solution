class Solution {
public:
    string compressString(string S) {
        char pre=0;
        string str="";
        int cnt=0;
        for(int i=0; i<S.size(); i++){
            if(S[i]!=pre){
                if(cnt>0){
                    str+=pre;
                    str+=to_string(cnt);
                }
                pre=S[i];
                cnt=1;
            }
            else{
                cnt++;
            }
        }
        if(cnt>0){
            str+=pre;
            str+=to_string(cnt);
        }
        return str.size()<S.size() ? str : S;
    }
};
