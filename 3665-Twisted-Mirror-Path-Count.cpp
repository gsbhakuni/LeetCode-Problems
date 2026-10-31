class Solution {
public:
    long long helper(vector<vector<vector<long long>>>&dp, vector<vector<int>>&v, int i, int j, int a){
        if(i >= v.size() || j >= v[0].size()) return 0;
        if(i == v.size()-1 and j == v[0].size()-1) return 1;
        if(a != -1 and dp[i][j][a] != -1) return dp[i][j][a];
        long long ans = 0;
        if(v[i][j] == 1 and a == 0) ans = helper(dp, v, i, j+1, 1);
        else if(v[i][j] == 1 and a == 1) ans = helper(dp, v, i+1, j, 0);
        else{
            long long down = helper(dp, v, i+1, j, 0);
            long long right = helper(dp, v, i, j+1, 1);

            ans = (down + right) % (1000000007);
        }
        if(a != -1) dp[i][j][a] = ans;
        return ans;
    }
    int uniquePaths(vector<vector<int>>& v) {
        int n= v.size(), m = v[0].size();
        vector<vector<vector<long long>>>dp(n+1, vector<vector<long long>>(m+1, vector<long long>(2, -1)));
        return helper(dp, v, 0, 0, -1);
    }
};