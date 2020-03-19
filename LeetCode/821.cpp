class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> ep;
        for(int i=0; i<S.size(); i++)
            if(S[i]==C) ep.push_back(i);
        
        vector<int> res(S.size());
        int k=0;
        for(int i=0; i<S.size(); i++){
            if(i<=ep[k]){
                res[i]=ep[k]-i;
            }
            else if(k+1<ep.size() && i<=ep[k+1]){
                res[i]=min(i-ep[k], ep[k+1]-i);
            } 
            else if(k+1<ep.size()){
                k++;
                i--;
            }
            else{
                res[i]=i-ep[k];
            }
        }
        return res;
    }
};
