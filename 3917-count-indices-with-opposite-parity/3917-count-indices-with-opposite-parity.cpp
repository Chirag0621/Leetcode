class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            bool isEven = true;
            if(nums[i] % 2 != 0) isEven = false;
            int cntEven = 0, cntOdd = 0;
            for(int j = i + 1; j < n; j++){
                if(nums[j] % 2 == 0){
                    cntEven++;
                }
                else{
                    cntOdd++;
                }
            }
            if(isEven) ans.push_back(cntOdd);
            else ans.push_back(cntEven);
        }
        return ans;
    }
};