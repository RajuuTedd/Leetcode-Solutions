// Last updated: 1/30/2026, 6:56:40 PM
class Solution {
private:
    void powerset(int start, vector<int>& nums , vector<vector<int>>& res,vector<int>&sub){
        
        res.push_back(sub); //base case
    


        for(int i = start; i < nums.size() ; i++){   // recursion
            sub.push_back(nums[i]);

            powerset(i+1,nums,res,sub);

            sub.pop_back();
        }
    }
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res ;
        vector<int> sub;
        powerset(0,nums,res,sub);
        return res;
    }
};