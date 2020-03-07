class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0, cows=0;
        map<char, int> record;
        for(int i=0; i<secret.size(); i++){
            if(secret[i]==guess[i]){
                bulls++;
                guess[i]='#';
            }
            else
                record[secret[i]]++;
        }
        for(int i=0; i<guess.size(); i++){
            if(guess[i]!='#' && record[guess[i]]){
                record[guess[i]]--;
                cows++;
            }
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};
