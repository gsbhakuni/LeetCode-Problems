class Solution {
public:
    bool check(vector<int>v){
        int ans = 0;
        for(int i = 0; i < v.size()-1; i++){
            if(ans == 0) ans = v[i+1] - v[i];
            else{
                if((v[i+1] - v[i]) != ans) return false;
            } 
        }
        return true;
    }
    int countSpecialIntegers(vector<int>& v) {
        unordered_map<int, vector<int>>m;
        int ans = 0;
        for(int i = 0; i < v.size(); i++){
            m[v[i]].push_back(i);
        }
        for(int i : v){
            if(m[i].size() < 3) m.erase(i);
        }
        for(auto i : m){
            if(check(i.second)) ans++;
        }
        return ans;
    }
};