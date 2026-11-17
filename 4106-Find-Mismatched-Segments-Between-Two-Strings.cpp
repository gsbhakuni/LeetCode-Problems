class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;
        int n = s1.size();
        for(int i = 0; i< n; i++){
            int l = i;
            while(s1[i] != s2[i]){
                i++;
            }
            string t1 = s1.substr(l, i-l);
            string t2 = s2.substr(l, i-l);
            if(t1.size() and t2.size()) ans.push_back({t1, t2});
        }
        return ans;
    }
};