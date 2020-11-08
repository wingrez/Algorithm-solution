class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=numBottles;
        int t;
        while(numBottles>=numExchange){
            t=numBottles/numExchange;
            res+=t;
            numBottles=numBottles%numExchange+t;
        }
        return res;
    }
}; 
