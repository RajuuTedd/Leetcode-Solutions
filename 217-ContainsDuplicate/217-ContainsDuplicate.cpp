// Last updated: 6/9/2025, 1:56:38 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])!=s.end())
            {
                return true;

            }
            s.insert(nums[i]);
        }
        return false;

    }
};