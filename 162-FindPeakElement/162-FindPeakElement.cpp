// Last updated: 6/9/2025, 1:56:41 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[max])
            {
                max = i;
            }

        }
        return max;
        

      
    }
};