// Last updated: 6/9/2025, 1:56:58 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
       int l = 0;
       int r = height.size() - 1 ;
       int area, res = 0;
       while(l<r)
       {
         area = (r-l)*min(height[l],height[r]) ; 
         res = max(res,area);
        if(height[l]<height[r])
        l++;
        else
        r--;

       }
       return res;
    }
};