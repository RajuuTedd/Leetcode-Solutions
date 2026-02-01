// Last updated: 2/1/2026, 7:16:53 PM
class Solution {
private:
    void combination(vector<vector<int>>&res, vector<int>&curr,int target, vector<int>&candidates,int start){
        if(target==0){
            res.push_back(curr);
            return;
        }

        for(int i = start; i< candidates.size(); i++){
            if(i > start && candidates[i] == candidates[i-1]) continue;
            
            if(candidates[i] > target) break;

        
            curr.push_back(candidates[i]);
            combination(res,curr,target - candidates[i],candidates, i+1);
            curr.pop_back();
        }

    }
public:

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        combination(res,curr,target,candidates,0);
        return res;
    }
};