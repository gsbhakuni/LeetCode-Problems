class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        sort(nums.begin(), nums.end());
        int f= 0;
        for(int i = 0; i < nums.size(); i++){
            while(i < nums.size() and nums[i] == target){
                f = 1;
                ans.push_back(i);
                i++;
            }
            if(f) return ans;
        }
        return ans;
    }
};