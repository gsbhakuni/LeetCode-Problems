class Solution {
public:
    void helper(vector<int>&v, vector<vector<int>>&ans, unordered_set<string>&s, int idx, int& n, string& str){
        if(idx == n){
            if(s.find(str) == s.end()){
                s.insert(str);
                ans.push_back(v);
            }
            return;
        }
        for(int i = idx; i < n; i++){
            swap(v[idx], v[i]);
            str+=to_string(v[idx]);
            str += ",";
            helper(v, ans, s, idx+1, n, str);
            str.pop_back();
            if(v[idx] == 10 or v[idx] < 0) str.pop_back();
            str.pop_back();
            swap(v[idx], v[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        unordered_set<string>s;
        string str = "";
        helper(nums, ans, s, 0, n, str);
        return ans;
    }
};