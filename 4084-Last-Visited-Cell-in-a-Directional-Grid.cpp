class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& v) {
        int i = 0, j = 0;
        int n = v.size(), m = v[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        while(1){
            vis[i][j] = 1;
            int x = i, y = j;
            if(v[i][j] == 'U') i--;
            else if(v[i][j] == 'D') i++;
            else if(v[i][j] == 'L') j--;
            else if(v[i][j] == 'R') j++;
            if(i < 0 || j < 0 || i == n || j == m || vis[i][j] != 0) return {x, y};
        }
        return {};
    }
};