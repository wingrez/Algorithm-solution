class Solution {
public:
    string reverseStr(string s, int k) {
        string::iterator it=s.begin(), prep=s.begin();
        while(it!=s.end()){
            if(it-prep+1==k*2){
                reverse(prep, prep+k);
                prep=it+1;
            }
            it++;
        }
        if(it-prep<k) reverse(prep, it);
        else reverse(prep, prep+k);
        return s;
    }
};
