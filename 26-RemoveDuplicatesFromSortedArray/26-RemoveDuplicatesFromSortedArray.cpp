// Last updated: 6/9/2025, 1:56:55 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int n = nums.size();
        set<int> st;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        int index = 0;
        for(auto it:st)
        {
            nums[index] =it;
            index++;
        }
        return index;

    }
};