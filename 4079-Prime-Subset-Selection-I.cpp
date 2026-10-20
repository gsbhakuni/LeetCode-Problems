int gaurav = 0;
vector<int>ding(1e6+1, 0);
class Solution {
public:
    void build(){
        gaurav = 1;
        for(int i = 2; i * i < 1e6; i++){
            if(ding[i] != 1){
                for(int j = 2; i * j < 1e6; j++){
                    ding[i*j] = 1;
                }
            }
        }
    }
    vector<int> maxPrimes(int n, int s) {
        if(!gaurav) build();
        vector<int>ans;
        for(int i = 2; i <= n; i++){
            if(ding[i] == 0 and s - i >= 0){
                ans.push_back(i);
                s -= i;
            }
        }
        return ans;
    }
};