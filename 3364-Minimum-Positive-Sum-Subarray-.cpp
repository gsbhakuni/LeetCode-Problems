class Solution {
public:
    int minimumSumSubarray(vector<int>& v, int l, int r) {
        int n = v.size();
        int ans = INT_MAX;
        vector<int>pre(n+1, 0);
        for(int i = 1; i <= n; i++){
            pre[i] = pre[i-1] + v[i-1];
        }

        for(int i = l; i <= r; i++){
            int low = 0, high = i;
            while(high <= n){
                int sum = pre[high]-pre[low];
                if(sum > 0) ans = min(ans, sum);
                high++; low++;
            }

        }

        
        return ans == INT_MAX ? -1 : ans;
    }
};