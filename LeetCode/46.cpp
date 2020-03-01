class Solution {
public:
    vector<vector<int> > res;
    vector<bool> used;

    void generatePermution(const vector<int> &nums, int index, vector<int>& p){
        if(index==nums.size()){
            res.push_back(p);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(!used[i]){
                p.push_back(nums[i]);
                used[i]=true;
                generatePermution(nums, index+1, p);
                used[i]=false;
                p.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        res.clear();
        if(nums.size()==0)
            return res;
        
        used=vector<bool>(nums.size(), false);
        vector<int> p;
        generatePermution(nums, 0, p);
        return res;
    }
};
