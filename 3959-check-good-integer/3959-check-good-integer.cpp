class Solution {
public:
    bool checkGoodInteger(int n) {
        long long squareSum = 0;
        long long digitSum = 0;
        while(n > 0){
            int digit = n % 10;
            n = n / 10;
            digitSum += digit;
            squareSum += digit * digit;
        }
        if(squareSum - digitSum >= 50) return true;
        return false;
    }
};