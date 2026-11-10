class Solution {
public:
    int climbStairs(int n, vector<int>& v) {
        vector<int>dp(n+1, -1);
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            int jump2 = INT_MAX;
            int jump3 = INT_MAX;
            int jump1 = (v[i-1] + 1) + dp[i-1];
            if(i >= 2) jump2 = (v[i-1] + 4) + dp[i-2];
            if(i >= 3) jump3 = (v[i-1] + 9) + dp[i-3];
            dp[i] = min(min(jump1, jump2), jump3);
        }
        return dp[n];
    }
};