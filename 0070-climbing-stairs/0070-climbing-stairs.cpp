class Solution {
public:
    int climbStairs(int n) {
        // Tabulaztion
        // vector<int> dp(n+1);
        // if(n <= 1){
        //     return 1;
        // }

        // if(dp[n] != 0){
        //     return dp[n];
        // }

        // dp[0] = 1;
        // dp[1] = 1;
        // for(int i = 2; i <= n; i++){
        //     dp[i] = dp[i-1] + dp[i-2];
        // }
        
        // return dp[n];

        //Space-Optimization of Tabulation
        int prev = 1;
        int prev2 = 1;
        int curr;
        for(int i = 2; i <=n;i++){
            curr = prev + prev2;
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};