// Last updated: 6/26/2025, 9:23:52 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        int i = 0 ;
        int j = 0;
        int res=0;
        while(i < n && j < m)
        {
       
        if(s[i]==t[j])
            {
            i++;
             }
                    j++;

            }
     return i ==n;
    }
};