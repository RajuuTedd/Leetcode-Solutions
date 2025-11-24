// Last updated: 11/24/2025, 6:40:53 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int l = 0 , r = n-1, ans = 0;
        while(l<r){
            if(people[r]==limit){
                r--;
                ans++;
            }
             
            else{
                int s = people[l] + people[r];

                if(s==limit){
                    ans++;
                    l++;
                    r--;
                }
                else if(s>limit){
                    r--;
                    ans++;
                }
                else{
                    l++;
                    r--;
                    ans++;
                }
            }


            if(l==r && people[r]<=limit){
                ans++;
                return ans;
            }
        }
        return ans;
    }
};