class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i1=0, i2=numbers.size()-1;
        while(i1<i2){
            if(target-numbers[i2]==numbers[i1]) break;
            else if(target-numbers[i2]>numbers[i1]) i1++;
            else i2--;
        }
        return vector<int>{i1+1, i2+1};
    }
};
