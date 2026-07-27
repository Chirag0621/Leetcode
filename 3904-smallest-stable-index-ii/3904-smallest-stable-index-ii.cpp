class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
    
        int n = nums.size();
        vector<int> miniVec;
        int mini = INT_MAX;
        for(int i = n - 1; i >= 0; i--){
            mini = min(mini, nums[i]);
            miniVec.push_back(mini);
        }
        reverse(miniVec.begin(), miniVec.end());
        
        int maxi = INT_MIN;
        int res = -1;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            int idx = i;
            int mini = miniVec[i];
            if ((maxi - mini) <= k) {
                res = i;
                break;
            }
        }
        return res;
    }
};