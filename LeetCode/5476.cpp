class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int cnt=0, i=0;
        while(i<arr.size()-1 && cnt<k){
            if(arr[i]>arr[i+1]){
                arr[i+1]=arr[i];
                cnt++;
            }
            else{
                cnt=1;
            }
            i++;
        }
        return arr[i];
    }
};
