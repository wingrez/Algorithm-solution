class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> record;
        int cnt=0;
        for(char ch: J){
            record.insert(ch);
        }
        for(char ch: S){
            if(record.find(ch)!=record.end())
                cnt++;
        }
        return cnt;
    }
};
