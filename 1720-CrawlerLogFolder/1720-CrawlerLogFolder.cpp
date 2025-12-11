// Last updated: 12/11/2025, 6:34:57 AM
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n = logs.size();
        int cnt = 0;
        for(const auto& log : logs){
            if(log == "../"){
                if(cnt > 0){
                    cnt--;
                }
            }
            else if(log !="./") {
                cnt++;
            }
        }
    return cnt;
    }
};