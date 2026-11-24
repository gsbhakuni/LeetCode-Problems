class Solution {
public:
    bool check(vector<int>&v, int l, int r){
        long long ans = -1;
        long long LCM = 1;
        long long mul = 1;
        for(int i = l; i < r; i++){
            int n = gcd(v[i], v[i+1]);
            if(ans == -1){
                ans = n;
            } else {
                if(n != ans){
                    ans = 1;
                    break;
                }
            }
        }
        for(int i = l; i <= r; i++){
            if(LCM == 1) LCM = v[i];
            else LCM = lcm(LCM, v[i]);
        }
        int k = LCM * ans;
        for(int i = l; i <= r; i++){
            if(mul > k) return 0;
            mul *= v[i];
        }
        return mul == k;
    }

    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(check(nums, i, j)){
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};