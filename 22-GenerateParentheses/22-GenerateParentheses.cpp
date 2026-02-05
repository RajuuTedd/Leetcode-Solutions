// Last updated: 2/5/2026, 7:38:49 PM
class Solution {
private: 
    void parenthesis(vector<string>&res,string curr, int open, int close, int n){
        
        if(curr.length() == n * 2){
            res.push_back(curr);
            return;
        }

        if(open < n){
            parenthesis(res,curr+"(", open + 1, close, n);
        }

        if(close < open){
            parenthesis(res,curr+")", open, close+1,n);
        }

    }

public:
    vector<string> generateParenthesis(int n) {
        if(n==0 || n < 0) return {};
        vector<string> res;
        string curr = "";
        parenthesis(res,curr,0,0,n);
        return res;
    }
};