class Solution {
public:
    struct Node{
        int ch;
        int num;
        Node(int _ch, int _num){
            ch=_ch; num=_num;
        }
        bool operator < (const Node &rhs) const{
            return num>rhs.num;
        }
    };

    string frequencySort(string s) {
        map<int, int> mp;
        for(int i=0; i<s.size(); ++i){
            mp[s[i]]++;
        }
        vector<Node> vt;
        for(auto it=begin(mp); it!=end(mp); ++it){
            vt.push_back(Node(it->first, it->second));
        }
        sort(begin(vt), end(vt));

        string ret="";
        for(auto it=begin(vt); it!=end(vt); ++it){
            for(int i=0; i<it->num; ++i){
                ret+=it->ch;
            }
        }
        return ret;
    }
};
