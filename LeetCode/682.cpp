class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> valid;
        int res=0;

        for(int i=0; i<ops.size(); i++){
            if(ops[i]=="+"){
                int sz=valid.size();
                if(sz>1) valid.push_back(valid[sz-1]+valid[sz-2]);
                else if(sz>0) valid.push_back(valid[sz-1]);
            }
            else if(ops[i]=="D"){
                int sz=valid.size();
                if(sz>0) valid.push_back(valid[sz-1]*2);
            }
            else if(ops[i]=="C"){
                valid.pop_back();
            }
            else{
                valid.push_back(stoi(ops[i], 0, 10));
            }
        }

        for(int sc: valid)
            res+=sc;
        
        return res;
    }
};
