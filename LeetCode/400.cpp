class Solution {
public:
    int findNthDigit(int n) {
        long long start[11]={0, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
        long long nums[11]={ 0, 9, 189, 2889, 38889, 488889, 5888889, 68888889, 788888889, 8888888889, 98888888889 };
        int p=0;
        while(nums[p]<n) p++;
        n-=nums[p-1];
        
        int r=n%p;
        int d=n/p;
        
        d=start[p]+d-1;
        string s;
        if(r){
            s=to_string(d+1);
            return s[r-1]-'0';
        }
        else{
            s=to_string(d);
            return s[s.size()-1]-'0';
        }
    }
};
