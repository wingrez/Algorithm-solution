class Solution {
public:
    unordered_set<int> record;
    bool isHappy(int n) {
        while(record.find(n)==record.end()){
            record.insert(n);
            int sum=0;
            while(n){
                sum+=(n%10)*(n%10);
                n/=10;
            }
            if(sum==1) return true;
            return isHappy(sum);
        }
        return false;
    }
};
