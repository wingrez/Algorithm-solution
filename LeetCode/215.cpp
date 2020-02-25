class Solution {
public:

    int partition(vector<int>& nums, int l, int r){
        int x=nums[l];
        while(l<r){
            while(l<r && nums[r]>=x) r--;
            nums[l]=nums[r];
            while(l<r && nums[l]<=x) l++;
            nums[r]=nums[l]; 
        }
        nums[l]=x;
        return l;
    }

    int find(vector<int>& nums, int l, int r, int k){
        if(l<=r){
            int p=partition(nums, l, r);
            if(r-p+1==k) return p;
            else if(r-p+1>k) return find(nums, p+1, r, k);
            else return find(nums, l, p-1, k-(r-p+1));
        }
        return -1;
    }
 
    int findKthLargest(vector<int>& nums, int k) {
        return nums[find(nums, 0, nums.size()-1, k)];
    }
};
