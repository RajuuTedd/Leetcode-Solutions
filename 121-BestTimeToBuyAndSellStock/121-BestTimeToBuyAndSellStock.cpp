// Last updated: 6/9/2025, 1:56:46 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(prices.empty()) return 0;
        int minPrice = prices[0] ; int maxprofit = 0 ;
        for(int i=0;i<n;i++)
        {
     

        minPrice = min(minPrice, prices[i]);

        maxprofit = max(maxprofit,prices[i]-minPrice);

        }
         return maxprofit;
    }
};