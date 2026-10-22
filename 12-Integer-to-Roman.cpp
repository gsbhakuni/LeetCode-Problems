class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int thousands = num / 1000;
        num %= 1000;
        int hundreds = num / 100;
        num %= 100;
        int tens = num / 10;
        num %= 10;
        int ones = num;
        cout << thousands << " " << hundreds << " " << tens << " " << ones;
        while(thousands){
            ans += "M";
            thousands--;
        }
        if(hundreds >= 5 and hundreds != 9){
            ans += "D";
            while(hundreds-5){
                ans += "C";
                hundreds--;
            }
        } else if(hundreds == 9){
            ans += "CM";
        } else {
            if(hundreds == 4) ans += "CD";
            else{
                while(hundreds){
                    ans += "C";
                    hundreds--;
                }
            }
        }

        if(tens == 9) ans += "XC";
        else if(tens == 4) ans += "XL";
        else{
            if(tens >= 5){
                ans += "L";
                while(tens-5){
                    ans += "X";
                    tens--;
                }
            } else {
                while(tens){
                    ans += "X";
                    tens--;
                }
            }
        }

        if(ones == 9) ans += "IX";
        else if(ones == 4) ans += "IV";
        else{
            if(ones >= 5){
                ans += "V";
                while(ones-5){
                    ans += "I";
                    ones--;
                }
            } else {
                while(ones){
                    ans += "I";
                    ones--;
                }
            }
        }
        return ans;
    }
};