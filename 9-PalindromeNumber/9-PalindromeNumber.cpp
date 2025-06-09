// Last updated: 6/9/2025, 1:56:59 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x!=0 && x%10==0)) return false;
        int temp = x;
        long result = 0;
        while(temp!=0)
        {
            int d = temp%10;
            result = result*10 + d;
            temp /=10;
           
        }
         return x==result;
    }
};