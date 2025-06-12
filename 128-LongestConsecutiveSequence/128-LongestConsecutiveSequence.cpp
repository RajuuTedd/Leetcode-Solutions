// Last updated: 6/12/2025, 4:38:26 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    set<int> st(nums.begin(),nums.end());
    int longest = 0;

    for(int x : st)
    {
        if(st.count(x-1)==0)
        {
            int current = x;
           int length =1 ;

            while(st.count(current +1)==1)
            {
                current++;
                length++;
            }

            longest = max(longest,length);
        }
    
        
    }
    return longest;
    }

};