class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        while(s[i] == ' '){
            i++;
        }
        long long a = 0;
        bool f = true;
        if(s[i] == '-'){
            f = false;
            i++;
        } else if(s[i] == '+'){
            i++;
        }
        for(i; i < s.size(); i++){
            int n = s[i] - '0';
            if(n > 9 or n < 0) break;
            a += n;
            if(a > INT_MAX and f) return INT_MAX;
            else if(a > INT_MAX and !f) return INT_MIN;
            a*= 10;
        }
        a/= 10;
        if(f){
            if(a > INT_MAX) return INT_MAX;
            return a;
        } else {
            a = -a;
            if(a < INT_MIN) return INT_MIN;
            return a;
        }
    }
};