class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> mp;
        stringstream ss(A);
        string str;
        while(ss>>str){
            mp[str]++;
        }
        ss.clear();
        ss.str("");
        ss<<B;
        while(ss>>str){
            mp[str]++;
        }

        vector<string> res;
        for(auto &[k, v]: mp){
            if(v==1) res.push_back(k);
        }

        return res;
    }
};
