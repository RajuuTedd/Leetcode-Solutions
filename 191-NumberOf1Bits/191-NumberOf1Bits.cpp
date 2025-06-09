// Last updated: 6/9/2025, 1:56:35 PM
class Solution {
public:
    int hammingWeight(int n) {
        int result = 0;
        while(n)
        {
            result += (n & 1) ;
            n >>= 1 ;
        }
        return result;
    }
};