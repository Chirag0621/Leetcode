class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int active = 0; // 0 = player 1, 1 = player 2
        int diff = 0;

        for (int i = 0; i < nums.size(); i++) {

            // Odd score -> swap
            if (nums[i] % 2 == 1) {
                active ^= 1;
            }

            // Every 6th game -> swap
            if (i % 6 == 5) {
                active ^= 1;
            }

            // Give points to active player
            if (active == 0) {
                diff += nums[i];
            } else {
                diff -= nums[i];
            }
        }

        return diff;
    }
};