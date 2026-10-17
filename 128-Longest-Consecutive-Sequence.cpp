class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        unordered_map<int, int>m;
        int n = v.size();
        int ans = 0;
        for(int i = 0; i < v.size(); i++){
            m[v[i]] = i;
        }
        for(int i = 0; i < n; i++){
            if(m.find(v[i]) == m.end()) continue;

            int l = v[i], r = v[i];
            m.erase(l);
            while(m.find(l-1) != m.end()){
                m.erase(l-1);
                l--;
            }
            while(m.find(r+1) != m.end()){
                m.erase(r+1);
                r++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};