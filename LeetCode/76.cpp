class Solution {
public:
    string minWindow(string s, string t) {
        int freq[256]={0}, copy[256]={0};
        for(int i=0; i<t.size(); ++i){
            freq[t[i]]++;
        }

        string minStr=s+"#";
        int has=0;
        int l=0, r=-1;
        while(l<s.size()){
            if(r+1<s.size() && has<t.size()){
                if(freq[s[r+1]]){
                    if(copy[s[r+1]]<freq[s[r+1]]) has++;
                    copy[s[r+1]]++;
                }
                r++;
            }
            else{
                if(freq[s[l]] && copy[s[l]]>=freq[s[l]] && has==t.size()){
                    copy[s[l]]--;
                    if(copy[s[l]]<freq[s[l]]){
                        string tmp=s.substr(l, r-l+1);
                        if(tmp.size()<minStr.size()){
                            minStr=tmp;
                        }
                        has--;
                    }
                }
                l++;
            }
        }

        if(minStr.size()>s.size()) return "";
        else return minStr;
    }
};
