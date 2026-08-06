// Last updated: 8/6/2026, 10:05:48 PM
class Solution {
public:
    void dfs(vector<vector<int>>&rooms, int node, vector<bool>& visited){
        
        visited[node] = true;

        for(int neighbour : rooms[node]){
            if(!visited[neighbour]){
                dfs(rooms,neighbour,visited);
            }
        }

    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n= rooms.size();
        vector<bool>visited (n,false);
        dfs(rooms,0,visited);
        for(bool room_visited : visited){
            if(!room_visited){
                return false;
            }
        }
        return true;
    }
};