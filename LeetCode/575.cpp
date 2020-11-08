class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> st;
        for(int c: candies){
            st.insert(c);
        }
        return st.size() > candies.size()/2 ? candies.size()/2 : st.size();

    }
};
