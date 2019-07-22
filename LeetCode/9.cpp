class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int tx=x;
        unsigned int sum=0;
        while(tx){
            sum=sum*10+tx%10;
            tx/=10;
        }
        if(sum==x) return true;
        return false;
    }
};
