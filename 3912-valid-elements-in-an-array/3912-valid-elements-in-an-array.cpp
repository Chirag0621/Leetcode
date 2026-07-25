class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        res.push_back(nums[0]);
        int prevMax = nums[0];
        for(int i = 1; i < n;i++){
            if(i == n-1){
                res.push_back(nums[i]);
                continue;
            }
            if(nums[i] > prevMax){
                res.push_back(nums[i]);
                prevMax = nums[i];
            }
            else{
                bool isGreater = true;
                for(int j = i + 1; j < n; j++){
                    if(nums[i] <= nums[j]) isGreater = false;
                }
                if(isGreater) res.push_back(nums[i]);
            }
            
            
        }
        return res;
    }
};