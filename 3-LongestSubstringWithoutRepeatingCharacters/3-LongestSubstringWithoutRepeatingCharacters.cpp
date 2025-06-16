// Last updated: 6/16/2025, 4:45:07 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0;
        int max_len = 0;
        int length = 0;
        for(int r = 0 ;r<s.length();r++)
        {
        while(st.count(s[r]))
            {
              st.erase(s[l]);
              l++;
            }

            st.insert(s[r]);

            max_len = max(max_len,r-l+1);
        }
        return max_len;
    }
};