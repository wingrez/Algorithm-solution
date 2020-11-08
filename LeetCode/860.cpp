class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> cnt(3);
        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5) cnt[0]++;
            else if(bills[i]==10){
                cnt[1]++;
                if(cnt[0]>=1) cnt[0]--;
                else return false;
            }
            else{
                cnt[2]++;
                if(cnt[1]>=1 && cnt[0]>=1){
                    cnt[1]--; cnt[0]--;
                }
                else if(cnt[0]>=3){
                    cnt[0]-=3;
                }
                else return false;
            }
        }
        return true;
    }
};
