class Solution {
public:
    int compress(vector<char>& chars) {
        char pre=0;
        int nums=0;
        int k=0;
        int cnt=0; //对每个字符计数
        for(int i=0; i<chars.size(); i++){
            if(pre!=chars[i]){
                if(cnt!=0) chars[k++]=pre;
                if(cnt>1){
                    string s=to_string(cnt);
                    for(int j=0; j<s.size(); j++)
                        chars[k++]=s[j];
                }
                pre=chars[i];
                cnt=1;
            }
            else{
                cnt++;
            }
        }
        if(cnt!=0) chars[k++]=pre;
        if(cnt>1){
            string s=to_string(cnt);
            for(int j=0; j<s.size(); j++)
                chars[k++]=s[j];
        }
        return k;
    }
};
