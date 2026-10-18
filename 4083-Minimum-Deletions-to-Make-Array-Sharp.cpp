class Solution {
public:
    void del(vector<int>&v, int a){
        for(int i = a; i < v.size()-1; i++){
            v[i] = v[i+1];
        }
        v.pop_back();
    }
    int minDeletions(vector<int>& v) {
        int ans = 0;
        for(int i = 0; i < v.size()-1; i++){
            while(i < v.size()-1 and v[i] == v[i+1]){
                ans++;
                i++;
            }
        }
        return ans;
    }
};