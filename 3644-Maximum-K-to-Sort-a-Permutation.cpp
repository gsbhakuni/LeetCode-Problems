class Solution {
public:
    int sortPermutation(vector<int>& v) {
        if(is_sorted(v.begin(), v.end())) return 0;
        int ans = -1;
        for(int i = 0; i < v.size(); i++){
            if(v[i] != i){
                ans &= v[i];
            }
        }
        return max(ans, 0);
    }
};