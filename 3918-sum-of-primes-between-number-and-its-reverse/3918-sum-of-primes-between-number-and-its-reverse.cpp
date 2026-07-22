class Solution {
public:
    bool isPrime(int n) {
        
        if (n <= 1)
            return false;

        
        if (n <= 3)
            return true;

       
        if (n % 2 == 0 || n % 3 == 0)
            return false;

        
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }

        return true;
    }
    int sumOfPrimesInRange(int n) {
        int r = 0;
        int num = n;
        while (num > 0) {
            int digit = num % 10;
            r = r * 10 + digit;
            num /= 10;
        }
        int minIdx = min(n, r);
        int maxIdx = max(n, r);
        int sum = 0;
        for (int i = minIdx; i <= maxIdx; i++) {
            if (isPrime(i))
                sum += i;
        }
        return sum;
    }
};