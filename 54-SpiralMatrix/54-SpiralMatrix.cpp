// Last updated: 12/15/2025, 9:20:09 AM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty()){
            return res;
        }

        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0;
        int l = 0;
        int bottom = m-1;
        int r = n-1;

        while(top<=bottom && l <=r){
            
            for(int col = l;col<=r;col++){
                res.push_back(matrix[top][col]);         
            }
            top++;

            
            for(int col = top;col<=bottom;col++){
                    res.push_back(matrix[col][r]);
            }
            r--;

            if(top<=bottom){
                for(int col = r;col>=l;col--){
                    res.push_back(matrix[bottom][col]);
                }
                bottom--;
            }

            if(l<=r){
                for(int col = bottom ; col >=top;col--){
                    res.push_back(matrix[col][l]);
                }
                l++;
            }
        }
        return res;
        
    }
};