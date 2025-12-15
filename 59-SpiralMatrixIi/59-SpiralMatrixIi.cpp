// Last updated: 12/15/2025, 9:20:10 AM
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {


        vector<vector<int>> matrix(n, vector<int>(n));
        int curr = 1;
        int maxx = n*n;
        int top = 0;
        int l = 0;
        int bottom = n-1;
        int r = n-1;

        while(curr <=maxx){
            
            for(int col = l;col<=r;col++){
                (matrix[top][col]) = curr++;         
            }
            top++;

            if(curr > maxx) break; 

            for(int col = top;col<=bottom;col++){
                   (matrix[col][r]) = curr++;
            }
            r--;

            if(curr > maxx) break;

            if(top<=bottom){
                for(int col = r;col>=l;col--){
                    (matrix[bottom][col]) = curr++;
                }
                bottom--;
            }
            
            if(curr > maxx) break; 
            
            if(l<=r){
                for(int col = bottom ; col >=top;col--){
                    (matrix[col][l]) = curr++;
                }
                l++;
            
            }
        
        }
        return matrix;
        
    }
  
};