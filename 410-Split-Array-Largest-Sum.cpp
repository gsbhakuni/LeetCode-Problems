class Solution {
public:
    int splitArray(vector<int>& v, int k) {
        int n = v.size();
        vector<int>pre(n+1);
        for(int i = 1; i <= n; i++){
            pre[i] = pre[i-1] + v[i-1];
        }
        vector<vector<long long>>dp(n+1, vector<long long>(k+1, INT_MAX));
        for(int i = 1; i <= n; i++){
            dp[i][1] = pre[i];
        }
        for(int i = 2; i <= n; i++){
            for(int j = 2; j <= min(i, k); j++){
                for(int p = j-1; p < i; p++){
                    long long right = pre[i] - pre[p];
                    long long curr = max(dp[p][j-1], right);
                    dp[i][j] = min(dp[i][j], curr);
                }
            }
        }
        return dp[n][k];

    }
};