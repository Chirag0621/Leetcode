class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long cnt = 0;
        int last = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < minK || nums[i] > maxK){
                last = i+1;
            }
            cnt += i+1-last;
        }
        return cnt;
    }
};