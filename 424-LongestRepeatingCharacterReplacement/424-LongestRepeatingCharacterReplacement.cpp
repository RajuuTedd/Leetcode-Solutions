// Last updated: 1/28/2026, 3:45:18 PM
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        unordered_map<char,int> dups;

        int left = 0;
        int ans = 0 ;

        for(int right = 0; right < n; ++right){
            dups[s[right]]++;

            ans = max(ans, dups[s[right]]);
            if(left - ans >= k){
                --dups[s[right - left]];
            }
            else{
                left++;
            }
        }
        return left;
    }
};