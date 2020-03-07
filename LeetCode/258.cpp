class Solution {
public:
    int addDigits(int num) {
        if(num && num%9==0) return 9;
        return num%9;
    }
};
