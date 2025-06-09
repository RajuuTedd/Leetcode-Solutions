// Last updated: 6/9/2025, 1:56:50 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0 ;
        for (int num : nums)
        {
            currentSum = max(num,currentSum + num);
            maxSum = max(maxSum,currentSum);
        }
        return maxSum;
    }
};