class Solution {
public:
    long long countSubarrays(vector<int>& v, int minK, int maxK) {
        int n = v.size();
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(v[i] >= minK and v[i] <= maxK){
                int l = i;
                while(i < n and (v[i] >= minK and v[i] <= maxK)){
                    i++;
                }
                long long x = i - l;
                ans += x * (x+1) / 2;
                i--;
            }
        }
        return ans;
    }
};