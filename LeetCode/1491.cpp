class Solution {
public:
    double average(vector<int>& salary) {
        int maxn=0, minn=salary[0];
        int sum=0;
        for(int i=0; i<salary.size(); i++){
            if(maxn<salary[i]) maxn=salary[i];
            else if(minn>salary[i]) minn=salary[i];
            sum+=salary[i];
        }
        return (sum-maxn-minn)*1.0/(salary.size()-2);
    }
};
