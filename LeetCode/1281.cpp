class Solution {
public:
    int subtractProductAndSum(int n) {
        int s1=1, s2=0;
        while(n){
            s1*=(n%10);
            s2+=(n%10);
            n/=10;
        }
        return s1-s2;
    }
};
