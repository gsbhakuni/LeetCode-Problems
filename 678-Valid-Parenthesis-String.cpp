class Solution {
public:
    bool checkValidString(string s) {
        // int l = 0, r = 0, a = 0;
        // for(char i : s){
        //     if(i == ')') l++;
        //     else if(i == '(') r++;
        //     else a++;
        // }
        // if(l != r and abs(l-r) > a) return false;
        int n = s.size();
        int l = 0, h = 0, i = 0;
        while(i < n){
            if(s[i] == '('){
                l++; h++;
            }
            else if(s[i] == ')'){
                l--;h--;
            }
            else{
                l--; h++;
            }

            if(h < 0) return false;
            l = max(l, 0);

            i++;
        }
        return l == 0;

        
    }
};