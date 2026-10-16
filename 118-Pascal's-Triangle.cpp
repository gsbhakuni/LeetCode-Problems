class Solution {
public:
    void helper(vector<vector<int>>&ans, int n){
        int s = 1, e = 1;
        vector<int>prev = {1};
        ans.push_back(prev);
        n--;
        while(n){
            vector<int>temp;
            temp.push_back(s);
            for(int i = 0; i < prev.size()-1; i++){
                temp.push_back(prev[i] + prev[i+1]);
            }
            temp.push_back(e);
            prev = temp;
            ans.push_back(prev);
            n--;
        }
    }
    vector<vector<int>> generate(int n) {
        if(n == 1) return {{1}};
        vector<vector<int>>ans;
        helper(ans, n);
        return ans;
    }
};