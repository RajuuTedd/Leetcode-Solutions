// Last updated: 1/14/2026, 6:09:12 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double n = nums.size();
        double maxAvg = 0;
        double currSum = 0;
        double curravg = 0;
        for(int i = 0 ;i<k;i++){
            currSum += nums[i];
            curravg = currSum / k;
        }

        maxAvg = curravg;

        for(int i = k ;i < nums.size(); i++){
            currSum += nums[i] - nums[i-k];
            curravg = currSum / k;
            maxAvg = max(maxAvg,curravg);
        }

        return maxAvg;
    }
};