class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int a: arr){
            mp[a]++;
        }

        int maxn=-1;
        for(const auto &[k, v]: mp){
            if(k==v && k>maxn) maxn=k; 
        }
        return maxn;
    }
};
