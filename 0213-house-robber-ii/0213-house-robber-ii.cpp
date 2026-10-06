class Solution {
public:
    int robRec(vector<int>& nums){
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        int prev2 = nums[0];
        int prev1 = max(nums[0], nums[1]);
        for(int i = 2; i < nums.size(); i++){
            int curr = nums[i];
            int take = curr + prev2;
            int skip = prev1;
            curr = max(take, skip);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;    
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        vector<int> temp1, temp2;
        for(int i = 1; i < nums.size(); i++){
            temp1.push_back(nums[i]);
        }
        for(int i = 0; i < nums.size()-1; i++){
            temp2.push_back(nums[i]);
        }
        return max(robRec(temp1), robRec(temp2));
    }
};