class Solution {
public:
    long long minimumCost(long long cost1, long long cost2, long long costBoth, long long need1, long long need2) {
        long long ans = 0;
        if((cost1 + cost2) > costBoth){
            ans += costBoth * min(need1, need2);
            if(need1 > need2){
                ans += (need1 - need2) * min(cost1, costBoth);
            } else {
                ans += (need2 - need1) * min(cost2, costBoth);
            }
        } else {
            ans += ((cost1 * need1) + (cost2 * need2));
        }
        return ans;
    }
};