class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";
        int c=0;
        int i=num1.size()-1, j=num2.size()-1;
        while(i>=0 || j>=0){
            int s=c;
            if(i>=0) s+=num1[i--]-'0';
            if(j>=0) s+=num2[j--]-'0';
            res.append(1, s%10+'0');
            c=s/10;
        }
        if(c) res.append(1, c+'0');
        reverse(begin(res), end(res));
        return res;
    }
};
