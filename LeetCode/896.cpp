class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int n=A.size();
        if(n==1) return true;
        int d=0;
        for(int i=1; i<A.size(); i++){
            if(d==0) d=A[i]-A[i-1];
            else if(d>0){
                if(A[i]-A[i-1]<0) return false; 
            }
            else{
                if(A[i]-A[i-1]>0) return false;
            }
        }
        return true;
    }
};
