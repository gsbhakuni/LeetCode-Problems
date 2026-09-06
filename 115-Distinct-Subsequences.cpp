class Solution {
public:
    long long helper(string &s, string& t,vector<vector<long long>>&dp, int i, int j){
        if (s.size() - i < t.size() - j) return 0;
        if(j == t.size()){
            return 1;
        }
        if(i == s.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        long long take = 0, nottake = 0;
        if(s[i] == t[j]){
            take = helper(s, t, dp, i+1, j+1);
        }
        nottake = helper(s, t, dp, i+1, j);
        return dp[i][j] = take + nottake;
    }
    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        vector<vector<long long>>dp(n, vector<long long>(m, -1));
        return helper(s, t,dp, 0, 0);
    }
};