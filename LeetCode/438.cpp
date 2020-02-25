class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int freq[26]={0}, copy[26]={0};
        for(int i=0; i<p.size(); i++){
            freq[p[i]-'a']++;   
        }
        memcpy(copy, freq, sizeof(copy));
        vector<int> res;
        int l=0, r=-1; //让[l,r]中总是不包含多余元素
        while(l<s.size()){
            if(r+1<s.size() && copy[s[r+1]-'a']){
                copy[s[++r]-'a']--;
            }
            else{
                if(freq[s[l]-'a']>copy[s[l]-'a']) copy[s[l++]-'a']++;
                else l++;
                if(l>r) r=l-1;
            }
            
            if(r-l+1==p.size()){
                res.push_back(l);
            } 
        }
        return res;
    }
};
