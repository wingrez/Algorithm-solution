class Solution {
public:
    bool isValid(string s) {
        stack<char> qs;
        int i;
        for(i=0; i<s.size(); ++i){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') qs.push(s[i]);
            else if(!qs.empty()){
                if(s[i]==')' && qs.top()=='(') qs.pop();
                else if(s[i]=='}' && qs.top()=='{') qs.pop();
                else if(s[i]==']' && qs.top()=='[') qs.pop();
                else break;
            }
            else break;
        }
        if(i!=s.size() || !qs.empty()) return false;
        return true;
    }
};
