// Last updated: 6/26/2025, 9:58:53 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insert = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[insert] = nums[i];
                insert++;
            }
        }

        while(insert < nums.size())
        {
            nums[insert] = 0;
            insert++;
        }
    }
};