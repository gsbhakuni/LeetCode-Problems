class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000) return 0;
        string s = to_string(n);
        int a = (s.length() - 1)/3;
        long long temp = 999;
        long long ans = 0;
        int i = 1;
        while(a >= i){
            ans += n - temp;
            i++;
            temp *= 1000;
            temp += 999;
        }
        return ans;
    }
};