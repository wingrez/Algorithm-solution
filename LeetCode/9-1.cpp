class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0) ) return false;
        
        int tx=0;
        while(x>tx){
            tx=tx*10+x%10;
            x/=10;
        }
        
        return tx==x || tx/10==x;
    }
};
