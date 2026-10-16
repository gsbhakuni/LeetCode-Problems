class Solution {
public:
    int majorityElement(vector<int>& v) {
        int i = 0;
        int freq = 0;
        int temp = v[i];
        while(i < v.size()){
            if(v[i] == temp){
                freq++;
            } else {
                freq--;
            }
            if(freq < 0){
                temp = v[i];
                freq = 1;
            }
            i++;
        }
        return temp;
    }
};