// Last updated: 12/10/2025, 6:21:43 AM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int write = 0;
        for(int read = 0 ;read<nums.size();read++){
            if(nums[read]%2==0){
                swap(nums[write],nums[read]);
                write++;
            }

        }
        return nums;
    }
};