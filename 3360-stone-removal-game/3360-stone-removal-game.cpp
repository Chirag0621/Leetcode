class Solution {
public:
    bool canAliceWin(int n) {
        for(int i = 10; i >= 1; i--){
            if(i == 10){
                if(n < 10) return false;
                n -= 10;
                continue;
            }
            n -= i;
            if(n < 0){
                if(i % 2 == 0){
                    return false;
                }
                else{
                    return true;
                }
            }
        }
        return true;
    }
};