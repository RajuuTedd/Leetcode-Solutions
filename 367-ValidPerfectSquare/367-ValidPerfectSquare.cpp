// Last updated: 6/9/2025, 1:56:29 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1 , r = num ;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if((long long)mid*mid<num)
            {
                l= mid+1;
            }
            else if ((long long)mid*mid>num)
            {
                r=mid-1;
            }
            else
            {
                return true;
            }
         
        }
        return false;
        // for(long long i=1;i*i<=num;++i)
        // {
        //    if(i*i==num)
        //    {
        //     return true;
        //    }
           

        // }
        // return false;
    }
    
};