class Solution {
public:
    string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> res;
        for(string str: words){
            string t="";
            for(char ch: str){
                t+=morse[ch-'a'];
            }
            res.insert(t);
        }
        return res.size();
    }
};
