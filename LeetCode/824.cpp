class Solution {
public:

    string toGoatLatin(string S) {
        vector<string> words;
        stringstream ss(S);
        string str;
        while(ss>>str){
            words.push_back(str);
        }

        char ch;
        for(int i=0; i<words.size(); i++){
            ch=tolower(words[i][0]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                words[i]+="ma";
            }
            else{
                words[i]=words[i].substr(1)+string(1, words[i][0])+"ma";
            }
            words[i]+=string(i+1, 'a');
        }

        string res;
        for(int i=0; i<words.size(); i++){
            if(i!=0) res+=" ";
            res+=words[i];
        }

        return res;
    }
};
