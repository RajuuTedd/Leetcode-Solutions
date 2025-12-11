// Last updated: 12/11/2025, 9:17:11 AM
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> w;
       while(ss>>word){
        w.push_back(word);
       }

        int n = w.size();
        int left = 0;
        int right = w.size() - 1;
        while(left < right){
            swap(w[left],w[right]);
            left++;
            right--;
        }

        // reverse(w.begin(),w.end());
        string ans = w[0];
        for(size_t i =1 ;i<w.size();i++){
            ans += " " + w[i];
        }
        return ans;
    }
};