// Last updated: 6/9/2025, 1:56:13 PM
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int rotation = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>nums[(i+1)%n])
            rotation++;
        }
        if(rotation>1) return false;

    return true;
    }
  
};