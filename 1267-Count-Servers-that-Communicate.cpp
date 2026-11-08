class Solution {
public:
    int countServers(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<int>rows(n, 0);
        vector<int>col(m, 0);
        for(int i = 0; i< n; i++){
            for(int j = 0; j < m; j++){
                if(v[i][j] == 1){
                    rows[i]++;
                    col[j]++;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(v[i][j] == 1){
                    if(rows[i] > 1 or col[j] > 1) ans++;
                }
            }
        }
        return ans;
    }
};