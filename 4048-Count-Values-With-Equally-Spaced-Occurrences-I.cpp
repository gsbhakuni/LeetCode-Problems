class Solution {
public:
    int check(vector<int>v){
        return (v[1] - v[0]) == (v[2] - v[1]);
    }
    int countSpecialIntegers(vector<int>& v) {
        unordered_map<int, vector<int>>m;
        int ans = 0;
        for(int i =0; i < v.size(); i++){
            m[v[i]].push_back(i);
        }
        for(int i : v){
            if(m[i].size() != 3) m.erase(i);
        }
        for(auto i : m){
            if(check(i.second)) ans++;
        }
        return ans;
    }
};