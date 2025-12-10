// Last updated: 12/10/2025, 6:21:53 AM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        
        int l = 0;
        for(int j = 0 ;j < nums.size();j++){
            if(nums[j]!= val){
                nums[l] = nums[j];
                l++; 
            }
            
        }
        return l;
    }
};