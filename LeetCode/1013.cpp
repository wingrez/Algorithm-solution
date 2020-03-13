class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum=0;
        for(int i=0; i<A.size(); i++){
            sum+=A[i];
        }
        if(sum%3) return false;
        int ave=sum/3;
        
        int i=-1, j=A.size();
        int s1=A[++i], s2=A[--j];
        while(i<j-1){
            if(s1!=ave){
                s1+=A[++i];
            }
            if(s2!=ave){
                s2+=A[--j];
            }
            if(i<j-1 && s1==ave && s2==ave){
                return true;
            }
        }
        return false;
    }
};
