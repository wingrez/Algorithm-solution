class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); ++i){
            freq[nums[i]]++;
        }
        //ÆµÂÊ, ÔªËØÖµ
        priority_queue<pair<int, int>, vector<pair<int, int> >,  less<pair<int, int> > > pq;
        vector<int> res;
        for(auto iter=freq.begin(); iter!=freq.end(); iter++){
            if(pq.size()==freq.size()-k){
                if(pq.size() && iter->second < pq.top().first){
                    res.push_back(pq.top().second);
                    pq.pop();
                    pq.push( make_pair(iter->second, iter->first) );
                }
                else res.push_back(iter->first);
            }
            else{
                pq.push( make_pair(iter->second, iter->first) );
            }
        }
        return res;
    }
};
