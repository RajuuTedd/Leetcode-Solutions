// Last updated: 6/30/2025, 5:58:30 PM
class Solution {
public:
    int climbStairs(int n) {
        if(n<=1)
        {
            return n;
        }
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2; i<=n ; ++i)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};