class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& v, int k) {
        int n = v.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        for(int i = 1; i < n; i++){
            if(v[i] <= v[i-1]){
                prefix[i] = prefix[i-1] + 1;
            }
        }
        for(int i = n-2; i >= 0; i--){
            if(v[i] <= v[i+1]){
                suffix[i] = suffix[i+1] + 1;
            }
        }
        vector<int>ans;
        for(int i = k; i < n; i++){
            if(prefix[i] >= k and suffix[i] >= k){
                ans.push_back(i);
            }
        }
        return ans;
    }
};