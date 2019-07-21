class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mymap;
        int maxn=0;
        int cnt=0;
        string::size_type i=0;
        string::size_type sp=0;
        while(i<s.length()){
            if(mymap.find(s[i])!=mymap.end() && mymap[s[i]]>=sp){ //find && mymap[s[i]]>=sp
                cnt=i-mymap[s[i]];
                sp=mymap[s[i]]+1;
            }
            else{ //not find || mymap[s[i]]<sp
                cnt++;
            }
            mymap[s[i]]=i;
            maxn=maxn>cnt?maxn:cnt;
            i++;
        }
        return maxn;
    }
};
