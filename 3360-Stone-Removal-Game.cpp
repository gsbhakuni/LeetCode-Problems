class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        n -= 10;
        int curr = true;
        int k = 9;
        while(n >= k){
            n -= k;
            k--;
            curr = !curr; 
        }
        return curr;

    }
};