// Last updated: 1/14/2026, 6:09:05 PM
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        int consecutiveCount = 1 ;
        vector<int> res(n - k + 1, -1);

        if(k==1){
            return nums;
        }

        for(int i = 0 ; i < n-1; i++){
            if(nums[i] + 1 == nums[i+1]){
                consecutiveCount++;
            }

            else{
                consecutiveCount = 1;
            }

            if(consecutiveCount >= k ){
                res[i-k+2] = nums[i+1];
            }
        }
     
        return res;
    }
};