// Last updated: 2/1/2026, 7:16:52 PM
class Solution {
private:
    void combination(vector<vector<int>>&res, vector<int>& curr, int target, vector<int>&candidates, int start){
        if(target==0){
            res.push_back(curr);
            return;
        }

        for(int i = start; i <candidates.size();i++){
            if(candidates[i] > target) break;

            curr.push_back(candidates[i]);
            combination(res,curr,target - candidates[i],candidates, i);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> res;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        combination(res,curr,target,candidates, 0);
        return res;
    }
};