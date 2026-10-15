class Solution {
public:
    int sumCounts(vector<int>& v) {
        int n = v.size();
        int ans = 0;
        unordered_set<int>s;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                s.insert(v[j]);
                ans += pow(s.size(), 2);
            }
            s.clear();
        }
        return ans;
    }
};