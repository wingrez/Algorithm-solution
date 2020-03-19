class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> stk;
        string res="";
        for(char ch: S){
            if(ch=='('){
                if(stk.size()>0)
                    res+=ch; 
                stk.push(ch);
            }
            else{
                stk.pop();
                if(!stk.empty())
                    res+=ch;
            }
        }
        return res;
    }
};
