class Solution {
public:
    void helper(string s, vector<string>&v, int a, int b, int &n){
        if(a < n){
            s += "(";
            helper(s, v, a+1, b, n);
            s.pop_back();
        }
        if(b < a){
            s += ")";
            helper(s, v, a, b+1, n);
            s.pop_back();
        }
        if(a == b and b == n){
            v.push_back(s);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper("", ans, 0, 0, n);
        return ans;
    }
};