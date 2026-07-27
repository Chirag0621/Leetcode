class Solution {
public:
    int findMIN(vector<int> &nums, int idx, int n){
        int mini = INT_MAX;
        for(int i = idx; i < n; i++){
            mini = min(mini, nums[i]);
        }
        return mini;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        int res = -1;
        for(int i = 0; i < n; i++){
            maxi = max(maxi, nums[i]);
            int idx = i;
            int mini = findMIN(nums,idx, n);
            if((maxi - mini) <= k){
                res = i;
                break;
            }
        }
        return res;
    }
};