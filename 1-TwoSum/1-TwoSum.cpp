// Last updated: 6/9/2025, 1:57:04 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> bruh;
        for(int i=0;i<n;i++)
        {
            int complement = target - nums[i];

            if(bruh.find(complement)!=bruh.end())
            return {bruh[complement], i};
        bruh[nums[i]] = i;
        }
    return {};
    }
};