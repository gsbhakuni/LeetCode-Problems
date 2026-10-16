class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        int n = v.size(), m = v[0].size();
        vector<int>ans;
        vector<vector<int>>vis(n, vector<int>(m, 0));
        int k = 0;
        while(k <= min(n, m)/2){
            for(int i = k; i < m; i++){
                if(vis[k][i] == 0){
                    ans.push_back(v[k][i]);
                    vis[k][i] = 1;
                }
            }
            for(int j = k; j < n; j++){
                if(vis[j][m-1-k] == 0){
                    ans.push_back(v[j][m-1-k]);
                    vis[j][m-1-k] = 1;
                }
            }
            for(int i = m-1-k; i >= 0; i--){
                if(vis[n-1-k][i] == 0){
                    ans.push_back(v[n-1-k][i]);
                    vis[n-1-k][i]++;
                }
            }
            for(int j = n-1-k; j >= 0; j--){
                if(vis[j][k] == 0){
                    ans.push_back(v[j][k]);
                    vis[j][k]++;
                }
            }
            k++;
        }
        return ans;

    }
};