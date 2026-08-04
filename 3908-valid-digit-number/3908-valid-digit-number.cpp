class Solution {
public:
    bool validDigit(int n, int x) {
        string num = to_string(n);
        if(num[0] - '0' == x) return false;
        for(char ch : num){
            if(ch -'0' == x){
                return true;
            }
        }
        return false;
    }
};