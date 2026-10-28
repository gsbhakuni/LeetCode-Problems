class Solution {
public:
    void helper(vector<vector<vector<int>>>&dp, vector<vector<int>>&v, int i, int j, int x){
        if(i == v.size() || j == v[0].size()) return;
        x ^= v[i][j];
        if(dp[i][j][x] != 0) return;
        if(i == v.size()-1 and j == v[0].size()-1){
            dp[i][j][x] = 1;
            return;
        }
        dp[i][j][x] = 1;
        helper(dp, v, i+1, j, x);
        helper(dp, v, i, j+1, x);
    }
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<vector<int>>>dp(n, vector<vector<int>>(m, vector<int>(1024, 0)));
        helper(dp, grid, 0, 0, 0);
        for(int i = 0; i < 1024; i++){
            if(dp[n-1][m-1][i] != 0) return i;
        }
        return -1;
    }
};