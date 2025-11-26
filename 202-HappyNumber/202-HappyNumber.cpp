// Last updated: 11/26/2025, 6:39:26 PM
class Solution {
public:
    bool isHappy(int n) {
        int slow  = n;
        int fast = next(n);

        while(slow!=fast){
            slow = next(slow);
            fast = next(next(fast));
        }
        return slow ==1;

    }

         int next(int n){
            int sum = 0 ;
            while(n > 0 ){
                int digit = n % 10;
                sum+= digit * digit;
                n /= 10;
            }
            return sum;
        }
};