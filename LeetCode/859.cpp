class Solution {
public:
    bool buddyStrings(string A, string B) {
        int m=A.size();
        int n=B.size();
        if(m!=n || m==0) return false;

        vector<int> sw;        
        for(int i=0; i<m; i++){
            if(A[i]!=B[i]){
                sw.push_back(i);
            }
        }

        if(sw.size()==0){
            map<int,int> mp;
            for(int i=0; i<m; i++){
                mp[A[i]]++;
                if(mp[A[i]]==2) return true;
            }
            return false;
        }

        if(sw.size()==2){
            swap(A[sw[0]], A[sw[1]]);
            return A==B;
        }

        return false;
    }
};
