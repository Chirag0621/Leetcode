class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        int digitRange = 0;
        for(int i = 0; i < n; i++){
            int num = nums[i];
            string s = to_string(num);
            int maxi = INT_MIN;
            int mini = INT_MAX;
            for(int j = 0; j < s.size(); j++){
                maxi = max(maxi, s[j] -'0');
                mini = min(mini, s[j] - '0');
            }
            digitRange = max(digitRange, (maxi - mini));
        }
       
        int ans = 0;
        for(int i = 0; i < n; i++){
            int num = nums[i];
            string s = to_string(num);
            int maxi1 = INT_MIN;
            int mini1 = INT_MAX;
            for(int j = 0; j < s.size(); j++){
                maxi1 = max(maxi1, s[j] -'0');
                mini1 = min(mini1, s[j] - '0');
            }
            if((maxi1 - mini1) == digitRange ){
                ans += nums[i];
            }
            
        }
        return ans;

        
    }
};