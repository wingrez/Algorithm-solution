class Solution {
public:
    int getSum(int a, int b) {
        int c;
        while(b){
            c=unsigned(a&b)<<1;
            a=a^b;
            b=c;
        }
        return a;
    }
};
