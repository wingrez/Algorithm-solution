class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int cnt[80002]={0};
        for(int v: A) cnt[v]++;
        
        int res=0, taken=0;
        for(int x=0; x<80000; x++){
            if(cnt[x]>1){
                taken+=cnt[x]-1;
                res-=x*(cnt[x]-1);
            }
            else if(taken>0 && cnt[x]==0){
                taken--;
                res+=x;
            }
        }

        return res;
    }
};
