// Last updated: 12/11/2025, 9:17:20 AM
class Solution {
public:
    int palindromebaby(const string& s , int left , int right){
        while(left >=0 && right < s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return right - left - 1 ;
    }
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int maxlen = 1;
       int start = 0;
        for(int center = 0 ;center < s.length();center++){
            int l1 = palindromebaby(s,center,center);
            int l2 = palindromebaby(s,center,center+1);

            int currlen = max(l1,l2);

            if(currlen  > maxlen){
                maxlen = currlen;
                start = center - (currlen - 1)/ 2;
            }

         
        }
        return s.substr(start,maxlen);
    }
};