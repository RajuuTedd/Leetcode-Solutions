// Last updated: 12/10/2025, 6:21:45 AM
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int l = 0;
        int k = 0;

        for(int i = 0 ;i<=n;i++){
            if(i==n||chars[i]!=chars[k]){
                
                chars[l++] = chars[k];
                int count  = i - k;


                if(count > 1){
                    string charss = to_string(count);
                    
                    for(char c: charss){
                        chars[l++] = c;
                    }
                }

                k = i;

            }
        }
        return l;
    }
};