class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>arr(10);
        arr[2] = "abc";
        arr[3] = "def";
        arr[4] = "ghi";
        arr[5] = "jkl";
        arr[6] = "mno";
        arr[7] = "pqrs";
        arr[8] = "tuv";
        arr[9] = "wxyz";

        vector<string>ans;
        if(digits.size() == 1){
            int n = digits[0] - '0';
            for(auto i : arr[n]){
                string s = "";
                s += i;
                ans.push_back(s);
            }
        }
        if(digits.size() == 2){
            int a = digits[0] - '0';
            int b = digits[1] - '0';
            for(auto i : arr[a]){
                string s = "";
                s += i;
                for(auto j : arr[b]){
                    s += j;
                    ans.push_back(s);
                    s.pop_back();
                }
            }
        }
        if(digits.size() == 3){
            int a = digits[0] - '0';
            int b = digits[1] - '0';
            int c = digits[2] - '0';
            for(auto i : arr[a]){
                string s = "";
                s += i;
                for(auto j : arr[b]){
                    s += j;
                    for(auto k : arr[c]){
                        s += k;
                        ans.push_back(s);
                        s.pop_back();
                    }
                    s.pop_back();
                }
            }
        }
        if(digits.size() == 4){
            int a = digits[0] - '0';
            int b = digits[1] - '0';
            int c = digits[2] - '0';
            int d = digits[3] - '0';
            for(auto i : arr[a]){
                string s = "";
                s += i;
                for(auto j : arr[b]){
                    s += j;
                    for(auto k : arr[c]){
                        s += k;
                        for(auto l : arr[d]){
                            s += l;
                            ans.push_back(s);
                            s.pop_back();
                        }
                        s.pop_back();
                    }
                    s.pop_back();
                }
            }
        }
        return ans;
    }
};