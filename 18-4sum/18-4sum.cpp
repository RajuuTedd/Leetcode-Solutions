// Last updated: 11/20/2025, 1:55:51 PM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector <vector<int>> res;
        sort(nums.begin(),nums.end());
        if (nums.size() < 4) return res;


        for(int i = 0 ;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j = i+1;j<nums.size()-2;j++)
            {
                if(j> i+1 && nums[j]==nums[j-1]) continue;
                
                int l = j + 1 , r = nums.size() - 1;
                long long remain_target =(long long) target - nums[i] - nums[j];
                while(l < r){
                    long long curr_sum =(long long) nums[l] + (long long) nums[r];

                    if(curr_sum==remain_target){
                        res.push_back({nums[i],nums[j],nums[l],nums[r]});

                        ++l;
                        --r;

                        // skip duplicates
                        while (l < r && nums[l] == nums[l - 1]) ++l;
                        while (l < r && nums[r] == nums[r + 1]) --r;
                    }

                    else if(curr_sum < remain_target){
                        l++;
                    }
                    else{
                        r--;
                    }
                }
            }
        }
        return res;
    }
};