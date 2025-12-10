// Last updated: 12/10/2025, 6:21:52 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int l = 2;
        for(int i = 2;i<nums.size();i++){
            if(nums[i]!=nums[l-2]){
                nums[l]=nums[i];
                l++;
            }
        }
        return l;
    }
};