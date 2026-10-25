class Solution {
public:
    int closedIsland(vector<vector<int>>& v) {
        queue<pair<int, int>>q;
        vector<vector<int>>vis(v.size(), vector<int>(v[0].size(), 0));
        int ans = 0;
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[0].size(); j++){
                if(vis[i][j] == 0 and v[i][j] == 0){
                    q.push({i, j});
                    int f = 1;
                    vis[i][j] = 1;
                    while(q.size()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        if(x == 0 || x == v.size()-1 || y == 0 || y == v[0].size()-1){
                            f = 0;
                        }
                        if(x+1 < v.size() and vis[x+1][y] == 0 and v[x+1][y] == 0) {
                            q.push({x+1, y}); 
                            vis[x+1][y] = 1;
                        }
                        if(y+1 < v[0].size() and vis[x][y+1] == 0 and v[x][y+1] == 0){
                            q.push({x, y+1});
                            vis[x][y+1] = 1;
                        } 
                        if(x-1 >= 0 and vis[x-1][y] == 0 and v[x-1][y] == 0){
                            q.push({x-1, y});
                            vis[x-1][y] = 1;
                        } 
                        if(y-1 >= 0 and vis[x][y-1] == 0 and v[x][y-1] == 0){
                            q.push({x, y-1});
                            vis[x][y-1] = 1;
                        } 
                    }
                    if(f) ans++;
                }
            }
        }
        return ans;
    }
};