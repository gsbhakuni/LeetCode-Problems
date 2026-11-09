class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
        int temp = INT_MAX;
        int ans;
        int n = v.size();
        for(int i = 0; i < n-2; i++){
            for(int j = i+1; j < n-1; j++){
                for(int k = j+1; k < n; k++){
                    int sum = v[i] + v[j] + v[k];
                    if(abs(target - sum) < temp){
                        temp = abs(target - sum);
                        ans = sum;
                    }
                }
            }
        }
        return ans;
    }
};