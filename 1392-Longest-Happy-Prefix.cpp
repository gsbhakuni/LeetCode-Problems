class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        int len = 0;
        vector<int>lps(n, 0);
        int i = 1; 
        while(i < n){
            if(s[i] == s[len]){
                lps[i] = ++len;
                i++;
            } else {
                if(len != 0){
                    len = lps[len-1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        int m = lps[n-1];
        string ans = "";
        for(int i = 0; i < m; i++){
            ans += s[i];
        }
        return ans;
    }
};