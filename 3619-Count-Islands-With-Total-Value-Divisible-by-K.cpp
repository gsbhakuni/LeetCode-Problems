class Solution {
public:
    int countIslands(vector<vector<int>>& v, int k) {
        int n = v.size(), m = v[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(v[i][j] != 0 and vis[i][j] == 0){
                    queue<pair<int, int>>q;
                    long long temp = 0;
                    q.push({i, j});
                    vis[i][j] = 1;
                    while(q.size()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        temp += v[x][y];
                        if(x-1 >= 0 and vis[x-1][y] == 0 and v[x-1][y] != 0){
                            vis[x-1][y] = 1;
                            q.push({x-1, y});
                        }
                        if(y-1 >= 0 and vis[x][y-1] == 0 and v[x][y-1] != 0){
                            vis[x][y-1] = 1;
                            q.push({x, y-1});
                        }
                        if(x+1 < n and vis[x+1][y] == 0 and v[x+1][y] != 0){
                            vis[x+1][y] = 1;
                            q.push({x+1, y});
                        }
                        if(y+1 < m and vis[x][y+1] == 0 and v[x][y+1] != 0){
                            vis[x][y+1] = 1;
                            q.push({x, y+1});
                        }
                    }
                    if(temp % k == 0) ans++;
                }
            }
        }
        return ans;
    }
};