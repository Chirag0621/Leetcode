class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end());
        long long totalSum = 0;
        int n = nums.size();
        int i = n - 1;
        while (k > 0) {
            if (mul >= 2) {
                totalSum += (1LL * nums[i] * mul);
            } else {
                totalSum += nums[i];
            }
            mul--;
            k--;
            i--;
        }
        return totalSum;
    }
};