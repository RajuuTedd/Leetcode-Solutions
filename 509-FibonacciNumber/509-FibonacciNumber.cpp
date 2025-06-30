// Last updated: 6/30/2025, 5:44:24 PM
class Solution {
public:
    int fib(int n) {
        if(n<=1)
        {
            return n;
        }

        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;

        for(int i=2;i<=n;i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];

    }
};