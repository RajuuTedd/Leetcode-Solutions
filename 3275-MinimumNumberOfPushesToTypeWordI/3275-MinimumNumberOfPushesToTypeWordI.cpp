// Last updated: 7/31/2026, 3:38:03 PM
class Solution {
public:
    int minimumPushes(string word) {
        
        int minPush = 0 ;
        int n = word.length();
        int blocks = n / 8;
        minPush = 4 * (blocks + 1) * blocks + (n%8) * (blocks+1);      
        return minPush;
    }
};