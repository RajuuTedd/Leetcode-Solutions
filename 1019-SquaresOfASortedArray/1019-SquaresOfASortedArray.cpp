// Last updated: 11/24/2025, 6:40:55 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int r = distance(nums.cbegin(), lower_bound(nums.cbegin(),nums.cend(),0));
        int l = r - 1;
        vector<int> res;
        while(0 <= l || r < nums.size()){
            if(r == nums.size() || ( 0<= l && nums[l]*nums[l]<nums[r]*nums[r])){
                res.emplace_back(nums[l]*nums[l]);
                --l;
            }
            else{
                res.emplace_back(nums[r]*nums[r]);
                ++r;
            }
        }
        return res;
    }
};