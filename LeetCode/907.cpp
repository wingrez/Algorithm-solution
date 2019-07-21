class Solution {
public:
    int sumSubarrayMins(vector<int>& A) {
    	int mod=1e9+7;
        long long ans=0;
        for(int i=0;i<A.size();i++){
            int l=i-1, r=i+1;
            long long suml=0,sumr=0;
            while(l>=0 && A[l]>=A[i]){
                suml++;
                l--;
            }
            while(r<A.size() && A[r]>A[i]){
                sumr++;
                r++;
            }
            ans=(ans+((1+suml+sumr+suml*sumr)*A[i])%mod)%mod;
        }
        return (int)ans;
    }

};

