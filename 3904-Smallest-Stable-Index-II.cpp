class Solution {
public:
    int firstStableIndex(vector<int>& v
    , int k) {
        int mini = INT_MAX, maxi = INT_MIN;
        int ans = INT_MAX;
        int n = v.size();
        vector<int>temp;
        for(int i : v){
            maxi = max(maxi, i);
            temp.push_back(maxi);
        }
        for(int i = n-1; i>= 0; i--){
            mini = min(mini, v[i]);
            if((temp[i] - mini) <= k) ans = min(ans, i);
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};