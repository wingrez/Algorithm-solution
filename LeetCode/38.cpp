class Solution {
public:
    string countAndSay(int n) {
        vector<string> vec;
        string s1, s2;
        char ch;
        int cnt;
        
        vec.push_back("1");
        for(int i=1; i<n; ++i){
            s1=vec[i-1]; s2="";
            ch=s1[0]; cnt=1;
            for(int j=1; j<s1.size(); ++j){
                if(s1[j]==ch){
                    cnt++;
                }
                else{
                    s2=s2+to_string(cnt)+ch;
                    ch=s1[j];
                    cnt=1;
                }
            }
            s2=s2+to_string(cnt)+ch;
            vec.push_back(s2);
        }
        return vec[n-1];
    }
};
