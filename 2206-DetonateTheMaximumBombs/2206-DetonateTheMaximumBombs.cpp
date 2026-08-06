// Last updated: 8/6/2026, 10:05:38 PM
class Solution {
public:
       void dfs(vector<vector<int>>&graph,  vector<bool>& visited,int &c,int &i){
        
        visited[i] = true;
        c++;
        for(int j =0; j<graph[i].size();j++){
            if(!visited[graph[i][j]]){
                dfs(graph,visited,c,graph[i][j]);
            }
        }

    }

    int maximumDetonation(vector<vector<int>>& bombs) {
     int n = bombs.size();
     int ans = INT_MIN;

     vector<vector<int>> graph(n);
     for(int i = 0 ; i <n ; i++){
        long long int  x1 = bombs[i][0];
        long long int y1 = bombs[i][1];
        long long int r1 = bombs[i][2];
        
        for(int j = 0 ; j <n ; j++){
            if(i!=j){

            long long int  x2 = abs(x1-bombs[j][0]);
            long long int  y2 = abs(y1-bombs[j][1]);

                if(x2*x2 + y2*y2 <=r1*r1){
                    graph[i].push_back(j);
                }
            }
            
        }

     }


     for(int i =0;i<n;i++ ){
        int c = 0;
        vector<bool> visited(n,false);
        dfs(graph,visited,c,i);
        ans = max(ans,c);
        }
        return ans;   
    }
};

