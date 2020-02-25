class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1;
        int maxn=(r-l)*min(height[l], height[r]);
        while(l<r){
            if(height[l]<height[r]) l++;
            else r--;
            maxn=max(maxn, (r-l)*min(height[l], height[r]));
        }
        return maxn;
    }
};
