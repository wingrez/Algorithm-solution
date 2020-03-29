class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> res;
        map<string, int> mp;
        string domain;
        int num;
        for(string str: cpdomains){
            stringstream ss(str);
            ss>>num>>domain;
            mp[domain]+=num;
            string::size_type p=0;
            while((p=domain.find('.', p))!=string::npos){
                mp[domain.substr(++p)]+=num;
            }
        }
        for(pair<string, int> pr: mp){
            res.push_back(to_string(pr.second)+" "+pr.first);
        }
        return res;
    }
};
