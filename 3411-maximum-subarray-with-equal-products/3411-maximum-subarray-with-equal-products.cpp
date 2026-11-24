class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxLength = 1;

        
        for(int i = 0; i < n; i++){
            long long product = 1;
            long long hcf = 0;
            long long lcmi = 1;
            for(int j = i; j < n; j++){
                if(product > 1e14/nums[j]) break;
                product *= nums[j];
                hcf = gcd(hcf,nums[j]);
                lcmi = lcm(lcmi, nums[j]);

                if(product == hcf * lcmi){
                    maxLength = max(maxLength, j-i+1);
                }
            }
        }
        return maxLength;

    }
};