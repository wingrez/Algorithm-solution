class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int> > res;
        int l=1, r=1;
        int sum=1;
        while(r<=target/2+1){
            if(sum<target){
                r++;
                sum+=r;
            }
            else if(sum>target){
                sum-=l;
                l++;
            }
            else{
                if(r>l){
                    vector<int> vec;
                    for(int i=l; i<=r; i++){
                        vec.push_back(i);
                    }
                    res.push_back(vec);
                    sum-=l;
                    l++;
                }
                else break;
            }
        }
        return res;
    }
};
