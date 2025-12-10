// Last updated: 12/10/2025, 7:57:52 AM
class Solution {
public:
    long long minimumSteps(string s) {
        vector<char> chars(s.begin(),s.end());
        
        int write = 0;
        long long totalsteps = 0;
        for(int read = 0 ;read<chars.size();read++){
            if(chars[read]=='0'){
                
                swap(chars[write],chars[read]);
                totalsteps += (long long)( read - write);
                write++;
            }
        }
        return totalsteps;

    }
};