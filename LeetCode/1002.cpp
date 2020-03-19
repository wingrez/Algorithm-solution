class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<map<char, int> > vm;
        for(string s: A){
            map<char, int> m;
            for(char ch: s){
                m[ch]++;
            }
            vm.push_back(m);
        }
        vector<string> res;
        for(auto it=vm[0].begin(); it!=vm[0].end(); it++){
            char ch=it->first;
            int cnt=it->second;
            for(int i=1; i<vm.size(); i++){
                cnt=min(cnt, vm[i][ch]);
            }
            for(int i=0; i<cnt; i++){
                res.push_back(string(1, ch));
            }
        }
        return res;
    }
};
