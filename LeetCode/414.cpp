class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int arr[3];
        int flag=0;
        for(int i=0; i<nums.size(); ++i){
            if(flag==0){
                arr[0]=nums[i];
                flag++;
            }
            else if(flag==1){
                if(nums[i]==arr[0]) continue;
                else if(nums[i]>arr[0]){
                    arr[1]=arr[0];
                    arr[0]=nums[i];
                }
                else arr[1]=nums[i];
                flag++;
            }
            else if(flag==2){
                if(nums[i]==arr[0] || nums[i]==arr[1]) continue;
                else if(nums[i]>arr[0]){
                    arr[2]=arr[1]; 
                    arr[1]=arr[0];
                    arr[0]=nums[i];
                }
                else if(nums[i]>arr[1]){
                    arr[2]=arr[1];
                    arr[1]=nums[i];
                }
                else arr[2]=nums[i];
                flag++;
            }
            else{
                if(nums[i]==arr[0] || nums[i]==arr[1] || nums[i]==arr[2]) continue;
                else if(nums[i]>arr[0]){
                    arr[2]=arr[1];
                    arr[1]=arr[0];
                    arr[0]=nums[i];
                }
                else if(nums[i]>arr[1]){
                    arr[2]=arr[1];
                    arr[1]=nums[i];
                }
                else if(nums[i]>arr[2]) arr[2]=nums[i];
            }
        }
        if(flag==3) return arr[2];
        return arr[0];
    }
};
