// Last updated: 12/11/2025, 7:55:46 AM
class Solution {
public:

    int countSubstrings(string s) {
        if(s.empty()) return 0;
        int ans = 0;
    for(int center = 0; center < s.length()* 2 -1;center++){
        int left = center / 2;
        int right = (center + 1) /2;

        while(left>=0 && right < s.length() && s[left] == s[right]){
           ans++;
           left--;
            right++;
        }

    }
     return ans;
    }
   
};