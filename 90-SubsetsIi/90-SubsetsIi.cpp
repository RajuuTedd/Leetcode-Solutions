// Last updated: 1/30/2026, 6:56:37 PM
class Solution {

private:
    void powerset(int start, vector<int>& nums , vector<vector<int>>& res,vector<int>&sub){
        
        res.push_back(sub); //base case
    


        for(int i = start; i < nums.size() ; i++){   // recursion
            if(i > start && nums[i]==nums[i-1]) continue;
            sub.push_back(nums[i]);

            powerset(i+1,nums,res,sub);

            sub.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> res ;
        vector<int> sub;
        powerset(0,nums,res,sub);
        return res;    
    }
};