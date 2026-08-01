class Solution {
public:
    int longestArithmetic(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return n;
        vector<int> L(n, 2), R(n, 2);
        // L[i] = max length of arithmetic subarray that ends at index i from
        // left direction R[i] = max length of arithmetic subarray that ends at
        // index i from right direction
        for (int i = 2; i < n; ++i) {
            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
                L[i] = L[i - 1] + 1;
        }
        for (int i = n - 3; i >= 0; --i) {
            if (nums[i + 2] - nums[i + 1] == nums[i + 1] - nums[i])
                R[i] = R[i + 1] + 1;
        }
        int ans = 2;
        for (int i = 0; i < n; i++) {
            if (i > 0)
                ans = max(ans, L[i - 1] + 1);
            if (i < n - 1)
                ans = max(ans, R[i + 1] + 1);
            if (i > 0 && i < n - 1) {
                if ((nums[i + 1] - nums[i - 1]) % 2 == 0) {
                    int diff = (nums[i + 1] - nums[i - 1]) / 2;
                    int l_len = 1, r_len = 1;
                    if (i >= 2 && nums[i - 1] - nums[i - 2] == diff)
                        l_len = L[i - 1];
                    if (i <= n - 3 && nums[i + 2] - nums[i + 1] == diff)
                        r_len = R[i + 1];
                    ans = max(ans, l_len + r_len + 1);
                }
            }
        }
        return ans;
    }
};