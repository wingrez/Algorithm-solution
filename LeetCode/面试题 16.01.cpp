class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers) {
        numbers[1]=numbers[0]^numbers[1];
        numbers[0]=numbers[1]^numbers[0];
        numbers[1]=numbers[1]^numbers[0];
        return numbers;
    }
};
