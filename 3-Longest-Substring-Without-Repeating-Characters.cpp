class Solution {
public:
    int lengthOfLongestSubstring(string v) {
        unordered_set<char>s;
        int m = INT_MIN;
        int i = 0, j = 0;
        if(v.size() == 0) return 0;
        while(j < v.size()){
            if(s.find(v[j]) == s.end()){
                s.insert(v[j]);
                j++;
            } else {
                auto it = s.find(v[i]);
                s.erase(it);
                i++;
            }
            m = max(m, j-i);
        }
        return m;
    }
};