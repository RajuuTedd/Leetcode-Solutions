// Last updated: 6/9/2025, 1:56:24 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        
        while(low<=high)
        {
            int mid = (low+high)/2 ; 
            if(nums[mid]==target) return mid;
            else if(target > nums[mid]) low = mid+1;
            else high=mid-1;
        }
        return -1;
    }
};