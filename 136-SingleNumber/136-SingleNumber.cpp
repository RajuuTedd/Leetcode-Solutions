// Last updated: 6/9/2025, 1:56:42 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int num : nums)
        {
         result ^= num;
        }
        return result ;
    }
};