class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        set<string> st; 
        string t1, t2;
        for(string s: A){
            t1=t2="";
            for(int i=0; i<s.size(); i++){
                if(i&1) t1+=s[i];
                else t2+=s[i];
            }
            sort(begin(t1), end(t1));
            sort(begin(t2), end(t2));
            t1+=t2;
            st.insert(t1);
        }
        return st.size();
    }
