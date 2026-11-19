class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        if(n == 3) return 0;
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        ans = min(ans, abs(nums[n-1] - nums[2]));
        ans = min(ans, abs(nums[n-3] - nums[0]));
        ans = min(ans, abs(nums[1] - nums[n-2]));
        return ans;
    }
};