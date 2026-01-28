// Last updated: 1/28/2026, 3:45:26 PM
class Solution {
private:
    void permutations( vector<vector<int>> &ans, vector<int> &ds, vector<int> &nums, int freq[]){
        if(ds.size()==nums.size()){  //base case
            ans.push_back(ds);
            return;
        }

        for(int i = 0;i<nums.size();i++){  //recusion/backtracking part
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                permutations(ans,ds,nums,freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i =0;i<nums.size();i++) freq[i] = 0;
        permutations(ans,ds,nums,freq);
        return ans;    
    }
};