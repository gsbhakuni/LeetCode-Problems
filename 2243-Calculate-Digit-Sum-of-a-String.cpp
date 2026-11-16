class Solution {
public:
    string round(string s, int k){
        int n = s.size();
        string v = "";
        for(int i = 0; i < n; i+=k){
            int sum = 0;
            for(int j = 0; j < k; j++){
                if(i + j < n){
                    sum += s[i+j] - '0';
                } else break;
            }
            v += to_string(sum);
        }
        return v;
    }
    string digitSum(string s, int k) {
        int n = s.size();
        int idx = 0;
        while(s.size() > k){
            s = round(s, k);
        }
        return s;
    }
};