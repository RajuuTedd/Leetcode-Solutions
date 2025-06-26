// Last updated: 6/27/2025, 12:14:18 AM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int canPlace = 0;
        int p = flowerbed.size();
        for(int i=0;i<p;i++)
        {
            if(flowerbed[i]==0)
            {
            bool left = (i  == 0 ) || (flowerbed[i-1]==0);
            bool right = (i== p -1) || (flowerbed[i+1]==0);

            if(left && right)
            {
                flowerbed[i] = 1;
                canPlace++;
            }

            }
            

        
        }
        
     return canPlace >= n;
    
    }
};

