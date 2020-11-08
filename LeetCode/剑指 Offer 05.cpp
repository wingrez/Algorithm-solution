class Solution {
public:
    string replaceSpace(string s) {
        string::size_type p=0;
        while((p=s.find(" ", p))!=string::npos){
            s.replace(p, 1, "%20");
            p+=3;
        }
        return s;
    }
};
