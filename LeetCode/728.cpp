class Solution {
public:
    bool judge(int num){
        string s=to_string(num);
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0' || num%(s[i]-'0')!=0) return false;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left; i<=right; i++){
            if(judge(i)) res.push_back(i);
        }
        return res;
    }
};
