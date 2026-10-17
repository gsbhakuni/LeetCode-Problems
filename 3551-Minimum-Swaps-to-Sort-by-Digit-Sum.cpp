class Solution {
public:
    int sum(int n){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        vector<pair<int, int>>v;
        unordered_map<int, int>m;
        for(int i : nums){
            v.push_back({sum(i), i});
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            m[v[i].second] = i;
        }
        int ans = 0;
        int i = 0;
        while(i < v.size()){
            if(i != m[nums[i]]){
                ans++;
                swap(nums[i], nums[m[nums[i]]]);
            }else {
                i++;
            }
        }
        return ans;
    }
};