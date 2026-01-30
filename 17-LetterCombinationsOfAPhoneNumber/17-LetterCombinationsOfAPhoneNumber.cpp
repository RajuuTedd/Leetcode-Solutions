// Last updated: 1/30/2026, 6:56:47 PM
class Solution {
private:
    
    map<int,string> keys{
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9,"wxyz"}
    };


    void combination(vector<string>& result, int idx, string &curr, string &digits ){
         
        if(curr.length()==digits.length()){
            result.push_back(curr);
            return;
        }

        char d = digits[idx];
        string letters = keys[d - '0'];

       
        for(char c : letters){
            curr.push_back(c);
            combination(result,idx+1,curr,digits);
            curr.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        int n = digits.length();
        if (digits.empty()) return {};
        vector<string> ans;
        string curr = "";
        int idx = 0;
        combination(ans,idx,curr,digits);
        return ans;
    }
};