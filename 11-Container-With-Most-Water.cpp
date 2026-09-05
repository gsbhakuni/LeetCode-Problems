class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, rp = height.size() -1, ans = 0;
        while(lp < rp){
            ans = max(ans, (rp - lp) * min(height[lp], height[rp]));
            (height[lp] < height[rp]) ? lp++ : rp--;
        }
        return ans;
    }
};