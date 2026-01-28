// Last updated: 1/28/2026, 3:45:09 PM
class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        multiset<int> indi;
        int left = 0;
        long long sub = 0;

        for(int right = 0 ;right < n ; ++right){
            indi.insert(nums[right]);

            while (*indi.rbegin() - *indi.begin() > 2){
                indi.erase(indi.find(nums[left]));
                left++;
            }
            sub += right - left + 1;
        }
        return sub;
    }
};