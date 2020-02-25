class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1;
        int c=0;
        string res="";
        while(i>=0 && j>=0){
            int t=c+a[i]-'0'+b[j]-'0';
            res.append(1, t%2+'0');
            c=t/2;
            i--; j--;
        }
        while(i>=0){
            int t=c+a[i]-'0';
            res.append(1, t%2+'0');
            c=t/2;
            i--;
        }
        while(j>=0){
            int t=c+b[j]-'0';
            res.append(1, t%2+'0');
            c=t/2;
            j--;
        }
        if(c) res.append(1, c+'0');
        reverse(begin(res), end(res));
        return res;
    }
};
