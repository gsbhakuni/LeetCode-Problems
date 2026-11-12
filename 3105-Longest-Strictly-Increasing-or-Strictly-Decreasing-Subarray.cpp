class Solution {
public:
    int longestMonotonicSubarray(vector<int>& v) {
        int idx = 0;
        int ans = 0;
        for(int i = 0; i < v.size(); i++){
            idx = i;
            while(i < v.size()-1 and v[i] > v[i+1]){
                i++;
            }
            ans = max(ans, i - idx);
        }
        idx = 0;
        for(int i = 0; i < v.size(); i++){
            idx = i;
            while(i < v.size()-1 and v[i] < v[i+1]){
                i++;
            }
            ans = max(ans, i-idx);
        }
        return ans + 1;

        
    }
};