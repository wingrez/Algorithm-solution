class Solution {
public:
    struct Node{
        bool exist;
        char ch;
        vector<int> nums;
        bool operator < (const Node &rhs) const{
            if(nums==rhs.nums) return ch<rhs.ch;
            return nums>rhs.nums;
        }
        
    }chnums[26];
    
    string rankTeams(vector<string>& votes) {
        for(int i=0; i<26; i++){
            chnums[i].exist=false;
            chnums[i].ch=i+'A';
            chnums[i].nums=vector<int>(26, 0);
        }

        for(int i=0; i<votes.size(); i++){
            for(int j=0; j<votes[i].size(); j++){
                chnums[votes[i][j]-'A'].exist=true;
                chnums[votes[i][j]-'A'].nums[j]++;
            }
        }
        
        sort(begin(chnums), end(chnums));
        string res="";
        for(int i=0; i<26; i++){
            if(chnums[i].exist==true){
                res=res+chnums[i].ch;
            }
        }
        return res;
    }
};
