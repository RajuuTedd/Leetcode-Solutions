// Last updated: 1/30/2026, 6:56:39 PM
class Solution {
public:
    void combinations(int n , int k, vector<vector<int>>& result, vector<int>&curr, int start){
        if(curr.size()==k){
            result.push_back(curr);
            return;
        }

        for(int i = start;i<=n;i++){
            curr.push_back(i);
    
            combinations(n,k,result,curr, i + 1 );
         
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> curr;
        int start = 1;
        combinations(n,k,result,curr,start);
        return result;
    }
};