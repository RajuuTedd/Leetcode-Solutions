// Last updated: 6/9/2025, 1:56:16 PM
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> C(n,0);
        unordered_set<int> seen;
        int common = 0;
       for(int i=0;i<n;i++)
       {
        if(seen.count(A[i]))
        {
            common++;
        }
        else
        {
            seen.insert(A[i]);
        }
        
        if(seen.count(B[i]))
        {
            common++;
        }
        else
        {
            seen.insert(B[i]);
        }

        C[i] = common;
       }
return C;
    }
};