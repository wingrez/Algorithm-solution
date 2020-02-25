class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> digits_copy(digits);
        int c=1;
        int i=digits_copy.size()-1;
        while(i>=0 && c>0){
            digits_copy[i]+=c;
            c=digits_copy[i]/10;
            digits_copy[i]%=10;
            i--;
        }
        if(c){
            digits_copy.insert(begin(digits_copy), c);
        }
        return digits_copy;
    }
};
