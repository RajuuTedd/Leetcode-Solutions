// Last updated: 6/9/2025, 1:56:14 PM
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) 
    {
        int n = nums.size();
       for(int i=0;i<n-1;i++)
       {
        if(nums[i]%2==0)
        {
            if(nums[i+1]%2==0)
            {
                return false;
            }
        }

        else if(nums[i]%2==1)
        {
            if(nums[i+1]%2==1)
            {
                return false;
            }
        }
       }
       return true;
    }
   
};