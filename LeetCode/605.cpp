class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m=flowerbed.size();
        for(int i=0; i<m && n; i++){
            if(flowerbed[i]==0){
                int k=0;
                if(i==0 || i-1>=0 && flowerbed[i-1]==0) k++;
                if(i==m-1 || i+1<m && flowerbed[i+1]==0) k++;
                if(k==2){
                    flowerbed[i]=1;
                    n--;
                }
            }
        }
        return n==0;
    }
};
