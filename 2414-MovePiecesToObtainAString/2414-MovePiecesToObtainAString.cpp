// Last updated: 12/10/2025, 7:57:51 AM
class Solution {
public:
    bool canChange(string start, string target) {
        std::size_t n = start.length();
        string s1,s2;
        for(char c : start){
            if(c!='_'){
                s1+=c;
            }
        }

        for(char c : target){
            if(c!='_'){
                s2+=c;
            }
        }

        if(s1.empty() && s2.empty()){
            return true;
        }
        else if(s1!=s2){
            return false;
        }

           std::size_t right = 0;
           std::size_t left = 0;

            while(left < n || right < n){
                while(left < n && start[left] =='_' ){
                    left++;
                }

                 while(right < n && target[right] =='_' ){
                    right++;
                }
                
                if(left ==n && right == n ){
                    break;
                }
                if(left > n || right > n){
                    break;
                }

                if(start[left] == 'L'){
                    if(right > left){
                        return false;
                    }
                }

                if(start[left] =='R'){
                    if(left > right){
                        return false;
                    }
                }

                left++;
                right++;

         }
    
    

            while(left < n && start[left] =='_') left++;
            while(right < n && target[right] == '_') right++;   
            return left == n && right == n;   
    }
};