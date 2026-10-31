class Solution {
public:
    int trap(vector<int>& v) {
        int n = v.size();
        vector<int>max_right(n);
        int ans = 0;

        int k = -1;   //To store the maximum value on the right of any index i
        for(int i = n-1; i >= 0; i--){
            k = max(k, v[i]);
            if(k != v[i]) max_right[i] = k;
        }

        k = -1;   //To store the maximum value on the left of any index i
        for(int i = 0; i < n; i++){
            k = max(k, v[i]);
            if(k != v[i]){
                int a = min(k, max_right[i]);
                if(a > v[i]){
                    ans += a - v[i];
                }
            }
        }
        return ans;
    }
};