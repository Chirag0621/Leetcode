class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long maxStrength = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j= i+1; j < n; j++){
                long long g = std::gcd(nums[i], nums[j]);
long long strength = 1LL * nums[i] * nums[j] / (g * g);
                maxStrength = max(maxStrength, strength);
            }
        }
        return maxStrength;
    }
};