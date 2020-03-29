class Solution {
public:
    int findComplement(int num) {
        int rnum=0;
        int k=0;
        while(num){
            rnum+=((num&1)?0:1)<<k;
            num>>=1;
            k++;
        }
        return rnum;
    }

