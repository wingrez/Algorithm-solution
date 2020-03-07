// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1, r=n;
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(isBadVersion(mid)){
                if(mid==1 || !isBadVersion(mid-1)) break;
                r=mid-1;
            }
            else l=mid+1;
            
        }
        return mid;
    }
};
