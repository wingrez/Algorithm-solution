class Solution {
public:
    bool isPerfectSquare(int num) {
        unsigned i;
        for(i=1; i*i<num; i++);
        return i*i==num;
    }
};
