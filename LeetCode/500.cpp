class Solution {
public:
    string key[3]={"qwertyuiop", "asdfghjkl", "zxcvbnm"};

    int find(char c){
        c=tolower(c);
        for(int i=0; i<3; i++){
            if(key[i].find(c)!=string::npos) return i;
        }
        return -1;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        for(int i=0; i<words.size(); i++){
            int p=find(words[i][0]);
            int j;
            for(j=1; j<words[i].size(); j++){
                if(find(words[i][j])!=p) break;
            }
            if(j==words[i].size()){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};
