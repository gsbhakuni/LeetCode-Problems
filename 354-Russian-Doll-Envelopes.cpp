class Solution {
public:
    static bool compare(vector<int>&a, vector<int>&b){
        if(a[0] == b[0]){
            int x = -1 * a[1];
            int y = -1 * b[1];
            return x < y;
        }
        return a[0] < b[0];
    }
    // int helper(vector<vector<int>>&dp, vector<vector<int>>&v, int i, int prev){
    //     if(i == v.size()) return 0;
    //     if(dp[i][prev+1] != -1) return dp[i][prev+1];
    //     int pick = 0;
    //     if(prev == -1 || v[i][0] > v[prev][0] and v[i][1] > v[prev][1]) pick = 1 + helper(dp, v, i+1, i);
    //     int notpick = helper(dp, v, i+1, prev);
    //     return dp[i][prev+1] = max(pick, notpick);
    // }

    int find_index(vector<vector<int>>&dp, int n){ //This finds the index for the value
        int l = 0, h = dp.size()-1;
        int ans = dp.size();
        while(l <= h){
            int mid = l + (h - l)/2;
            if(dp[mid][1] >= n){
                ans = mid;
                h = mid-1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
    int maxEnvelopes(vector<vector<int>>& v) {
        sort(v.begin(), v.end(), compare);
        int n = v.size();
        vector<vector<int>>dp;
        for(auto i : v){
            int x = find_index(dp, i[1]);
            if(x == dp.size()){
                dp.push_back(i);
            } else {
                dp[x] = i;
            }
        }
        return dp.size();
    }
};