class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n <= 1) return false;
        int a = 0, b = 1, c = 0;
        int k = 0;
        while(k <= n){
            k = a + b + c;
            if(k == n) return 1;
            c = a;
            int temp = b;
            b = a + b;
            a = temp;
        }
        return false;
    }
};