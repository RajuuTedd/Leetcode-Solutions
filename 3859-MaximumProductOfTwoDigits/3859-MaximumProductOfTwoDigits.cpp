// Last updated: 7/25/2026, 10:22:14 PM
class Solution {
public:
    int maxProduct(int n) {
        vector<int> digi;
        while(n>0){
            digi.push_back(n%10);
            n/=10;
        }
        int ans = -1;
        for(int i = 0 ; i < digi.size();i++){
            for(int j = i +1 ; j < digi.size(); j++){
                if( digi[i]*digi[j] > ans){
                    ans = digi[i]*digi[j];
                }
            }
        }
        return ans;
    }
};