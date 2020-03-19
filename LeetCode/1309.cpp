class Solution {
public:
    string freqAlphabets(string s) {
        s.append(2, '@');
        stringstream ss(s);
        string res="";
        string t;
        while(getline(ss, t, '#')){
            for(int i=0; i<t.size()-2; i++){
                res.append(1, 'a'+t[i]-'1');
            }
            if(t[t.size()-1]!='@')
                res.append(1, 'j'+(t[t.size()-2]-'0')*10+(t[t.size()-1]-'0')-10);
        }
        return res;
    }
};
