class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        vector<long long> rightProduct(n);
        rightProduct[n-1] = 1;
        for(int i = n - 2; i >= 0; i--){
            if(rightProduct[i+1] > LLONG_MAX / nums[i+1]){
                rightProduct[i] = LLONG_MAX;
            }
            else rightProduct[i] = rightProduct[i+1]*nums[i+1];
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
            if(sum == rightProduct[i]) return i;
            sum += nums[i];
        }
        return -1;
    }
};