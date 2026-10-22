class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int>v=nums;
        int n = nums.size();
        if (is_sorted(nums.begin(), nums.end())) return 0;
        for(int i : nums) v.push_back(i);
        int l = 0, r = 1;
        int a1 = INT_MAX;
        while(r < v.size()){
            if(v[r] != v[r-1]-1){
                l = r;
            }
            if(r - l + 1== n){
                a1 = l + 1;
                break;
            }
            r++;
        }
        int a2 = INT_MAX;
        l = 0, r = 1;
        while(r < v.size()){
            if(v[r] != v[r-1]+1){
                l = r;
            }
            if(r - l + 1== n){
                a2 = l;
                break;
            }
            r++;
        }
        v.clear();
        reverse(nums.begin(), nums.end());
        v = nums;
        for(int i : nums) v.push_back(i);
        int a3 = INT_MAX;
        l = 0, r = 1;
        while(r < v.size()){
            if(v[r] != v[r-1]-1){
                l = r;
            }
            if(r - l + 1== n){
                a3 = l + 2;
                break;
            }
            r++;
        }
        int a4 = INT_MAX;
        l = 0, r = 1;
        while(r < v.size()){
            if(v[r] != v[r-1]+1){
                l = r;
            }
            if(r - l + 1== n){
                a4 = l+1;
                break;
            }
            r++;
        }
        
        if (min(min(a1, a2), min(a3, a4)) == INT_MAX) return -1;
        else return min(min(min(a1, a2), a3), a4);
    }
};