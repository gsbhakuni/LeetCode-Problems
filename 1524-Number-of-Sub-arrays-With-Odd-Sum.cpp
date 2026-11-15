class Solution {
public:
    int numOfSubarrays(vector<int>& v) {
        int n = v.size();
        int ans = 0;
        vector<int>pre(n+1, 0);
        for(int i = 1; i <= n; i++){
            pre[i] = pre[i-1] + v[i-1];
        }
        int even = 0, odd = 0;
        for(int i = 0; i <= n; i++){
            if(pre[i]&1){
                odd++;
                if(even){
                    ans += even;
                }
            }
            else {
                even++;
                if(odd){
                    ans += odd;
                }
            }
            ans %= 1000000007;

        }
        return ans;
    }
};