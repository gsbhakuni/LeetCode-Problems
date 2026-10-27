class Solution {
public:
    vector<string> createGrid(int n, int m) {
        vector<string>v;
        string temp = "";
        for(int i = 0; i < m; i++){
            temp += ".";
        }
        v.push_back(temp);
        temp = "";
        for(int i = 0; i < m; i++){
            if(i == m-1) temp += ".";
            else temp += "#";
        }
        for(int i = 1; i < n; i++) v.push_back(temp);
        return v;
    }
};