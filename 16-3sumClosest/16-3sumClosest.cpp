// Last updated: 11/20/2025, 1:26:53 PM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest_sum = nums[0] + nums[1] + nums[2];
        for(int i =0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int l = i+1, r = nums.size()-1;
            while(l<r){
                int curr_sum  = nums[i] + nums[l] + nums[r];
                
                if(abs(curr_sum - target) < abs(closest_sum - target)){
                    closest_sum = curr_sum;
                }

                if(curr_sum < target){
                    l++;
                }
                else if(curr_sum > target){
                    r--;
                }
                else{
                    return closest_sum;
                }
            }
        }

        return closest_sum;

    }
};