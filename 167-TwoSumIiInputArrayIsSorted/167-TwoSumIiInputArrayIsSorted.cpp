// Last updated: 6/9/2025, 1:56:40 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
       int l = 0;
       int r = numbers.size() - 1 ;
       while(l<r)
       {
        int sum = numbers[l] + numbers[r];
        int ans = 0;
        if(sum==target)  return {l+1,r+1}; 
        if(sum < target) l++;
        if(sum>target)  r--;
       }
       return {};
    }
};