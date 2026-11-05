class Solution {
public:
    int candy(vector<int>& v) {
        int n = v.size();
        int down = 0;
        int up = 0;
        int total = 1;
        int peak = 0;
        for(int i = 1; i < n; i++){
            if(v[i] > v[i-1]){
                up++;
                down = 0;
                peak = up + 1;
                total += peak;
            } else if(v[i] < v[i-1]){
                up = 0;
                down++;
                total += down + (down >= peak ? 1 : 0);
            } else {
                up = 0;
                down = 0;
                peak = 0;
                total += 1;
            }
        }
        return total;
    }
};