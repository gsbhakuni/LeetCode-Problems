class Solution {
public:
    int waysToSplitArray(vector<int>& v) {
        int n = v.size();
        long long sum = 0;
        for(int i : v) sum += i;
        long long ans = 0;
        long long check = 0;
        for(int i = 0; i < n-1; i++){
            check += v[i];
            if(check >= sum - check) ans++;
        }
        return ans;
    }
};