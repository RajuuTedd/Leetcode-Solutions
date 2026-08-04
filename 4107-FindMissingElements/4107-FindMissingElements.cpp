// Last updated: 8/4/2026, 11:32:17 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int min = nums[0]; int max= nums.back();
        int it = 0;
        for(int i = min; i< max;i++){
            if( it<nums.size() && nums[it]==i){
                it++;
            }
            else{
                ans.push_back(i);
            } 
        }
        return ans;
    }
};