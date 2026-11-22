class Solution {
public:
    bool checkString(string s) {
        int i = 0; 
        while(i < s.size() and s[i] == 'a'){
            i++;
        }
        while(i < s.size()){
            if(s[i] == 'a'){
                return false;
            }
            i++;
        }
        return true;
    }
};