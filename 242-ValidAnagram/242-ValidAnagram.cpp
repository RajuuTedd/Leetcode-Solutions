// Last updated: 6/9/2025, 1:56:30 PM
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s.length()!=t.length()) return false;

        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());

        return s==t;
    }

};