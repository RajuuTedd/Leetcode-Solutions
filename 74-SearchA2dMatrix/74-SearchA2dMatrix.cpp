// Last updated: 6/9/2025, 1:56:49 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r= matrix.size(); int c =matrix[0].size();
        int top = 0, bot = r*c-1;
        while(top<=bot)
        {
            int mid = (top + bot)/ 2;
            int i = mid/c;
            int j = mid%c;

            if(matrix[i][j] == target)
            {
                return true;
            }
             if(matrix[i][j] < target)
            {
                top = mid + 1;
            }
            else
            {
                bot = mid - 1;
            }
           

        }
        return false;
    }
};