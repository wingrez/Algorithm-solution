class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int odd=0, even=0;
        for(int chip: chips){
            if(chip&1) odd++;
            else even++;
        }
        return min(odd, even);
    }
};
