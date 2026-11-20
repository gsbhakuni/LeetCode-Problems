class Solution {
public:
    string getHint(string v1, string v2) {
        int n = v1.size();
        int x = 0, y = 0;
        unordered_map<int, int>m;
        for(int i = 0; i < n; i++){
            int a = v1[i] - '0';
            m[a]++;
        }
        unordered_set<int>s;
        for(int i = 0; i < n; i++){
            int k = v2[i]-'0';
            if(v1[i] == v2[i]){
                x++;
                s.insert(i);
                m[k]--;
            }
            if(m[k] == 0) m.erase(k);
        }
        for(int i = 0; i < n; i++){
            int k = v2[i]-'0';
            if(s.find(i) == s.end()){
                if(m.find(k) != m.end()){
                    y++;
                    m[k]--;
                }
            }
            if(m[k] == 0) m.erase(k);
        }

        return to_string(x) + "A" + to_string(y) + "B";
    }
};