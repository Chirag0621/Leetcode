class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        for(int i = 4; i <= 16; i++){
            long long curr = (i - 1)/3;

            long long l = 1;
            for(int j = 1; j < i; j++){
                l *= 10;
            }
            long long r = l * 10 -1;

            if(l > n) break;
            long long cnt = min(r,n) - l + 1;
            ans += cnt * curr;
        }
        return ans;
    }
};