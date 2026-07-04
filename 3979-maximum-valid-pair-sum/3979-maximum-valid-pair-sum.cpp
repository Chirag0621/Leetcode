class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        vector<int> prefixMaximum = nums;

        for(int i = 1; i < n; i++){
            prefixMaximum[i] = max(prefixMaximum[i-1], nums[i]);
        }

        for(int j = k; j < n; j++){
            ans = max(ans, nums[j] + prefixMaximum[j-k]);
        }
        return ans;
    }
};