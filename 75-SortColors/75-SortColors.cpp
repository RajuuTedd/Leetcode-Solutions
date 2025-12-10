// Last updated: 12/10/2025, 6:21:51 AM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = nums.size()-1;
        int i = 0;
        int mid = 0;
        
            while(mid<=r){
                if(nums[mid]==0){
                    swap(nums[i],nums[mid]);
                    i++;
                    mid++;
                }
                else if(nums[mid]==2){
                    swap(nums[r],nums[mid]);
                    r--;
                }
                else{
                    mid++;
                }

            }
    }
};