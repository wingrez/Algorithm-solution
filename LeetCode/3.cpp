class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mymap; //记录每种字符的最新位置 
        int maxn=0, cnt=0;
        int i=0, sp=0; //sp记录当前子串的开始位置，用于处理不在当前子串，但是存在于map中的字符 
        while(i<s.size()){
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
