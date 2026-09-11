class Solution {
public:
    int fact(int n){
        int ans = 1;
        for(int i = 1; i <= n; i++) ans *= i;

        return ans;
    }
    int totalNumbers(vector<int>& v) {

        int n = v.size();
        // int a = 0;
        // int z = 0;
        // int total = 0;
        // unordered_map<int, int>m;
        // for(int i : v){
        //     if(i % 2 == 0){
        //         a++;
        //     }
        //     if(i == 0) z ++;
        //     m[i]++;
        // }
        // if(z != 0){
        //     total = ((n-z) * (n-2)) + ((a - z) * (n - 1 - z) * (n-2));
        // } else {
        //     total = a * (n-1) * (n-2);
        // }
        // for(auto i : m){
        //     total /= fact(i.second);
        // }
        // return total;
        unordered_set<int>s;
        for(int i = 0; i < n; i++){
            if(v[i] == 0) continue;
            for(int j = 0; j < n; j++){
                if(i != j){
                    for(int k = 0; k < n; k++){
                        if(k != j and k != i and v[k] % 2 == 0){
                            int a = v[i] * 100 + v[j] * 10 + v[k];
                            s.insert(a);
                        }
                    }

                }
            }
        }
        return s.size();
    }
};