class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long sum = 0;
        for(int x : nums) sum += x;
        long long pre = 0, cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i >= nums.size()/2){
                if(pre != sum - pre) cnt++;

                pre -= nums[i- nums.size()/2];
            }
            pre += nums[i];

        }
        return cnt;
    }
};