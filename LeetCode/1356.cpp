class Solution {
public:
    static bool cmp(int a, int b){
        int na=0, nb=0;
        int ta=a, tb=b;
        while(ta){
            na+=(ta&1);
            ta>>=1;
        }
        while(tb){
            nb+=(tb&1);
            tb>>=1;
        }
        if(na==nb) return a<b;
        return na<nb;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};
