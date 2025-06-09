// Last updated: 6/9/2025, 1:57:01 PM
class Solution {
public:
    int reverse(int x) {
        int temp = x;
         long result = 0;
        while(temp!=0)
        {
       
            int d = temp % 10;
            result = result*10 + d;
            temp /= 10;
        }
      return (result < INT_MIN || result > INT_MAX) ? 0 : result;
    }
};