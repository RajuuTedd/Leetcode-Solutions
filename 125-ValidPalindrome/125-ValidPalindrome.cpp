// Last updated: 6/9/2025, 1:56:44 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            // Move left pointer to the next alphanumeric character
            while (l < r && !isAlphanum(s[l])) 
                l++;
            // Move right pointer to the previous alphanumeric character
            while (r > l && !isAlphanum(s[r])) 
                r--;

            // Check if characters are not equal (ignoring case)
            if (tolower(s[l]) != tolower(s[r])) 
                return false;
            
            l++;
            r--;
        }
        return true;
    }

    bool isAlphanum(char c) {
        return ((c >= 'A' && c <= 'Z') || 
                (c >= 'a' && c <= 'z') || 
                (c >= '0' && c <= '9'));
    }
};
