class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> mp;
        for(int i=0; i<deck.size(); i++){
            mp[deck[i]]++;
        }
        int X=mp.begin()->second;
        for(pair<int, int> p: mp){
            X=gcd(X, p.second);
        }
        return X>1;
    }
};
