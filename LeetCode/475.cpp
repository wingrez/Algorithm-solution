class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(begin(houses), end(houses));
        sort(begin(heaters), end(heaters));
        int res=0;
        int i=0, j=0;
        while(i<houses.size()){
            if(j+1<heaters.size() && houses[i]>heaters[j] && houses[i]<heaters[j+1]){
                res=max(res, min(houses[i]-heaters[j], heaters[j+1]-houses[i]));
                i++;
            }
            else if(houses[i]<=heaters[j]){
                res=max(res, heaters[j]-houses[i]);
                i++;
            }
            else if(j+1==heaters.size() && houses[i]>heaters[j]){
                res=max(res, houses[i]-heaters[j]);
                i++;
            }
            else j++;
        }
        return res;
    }
};
