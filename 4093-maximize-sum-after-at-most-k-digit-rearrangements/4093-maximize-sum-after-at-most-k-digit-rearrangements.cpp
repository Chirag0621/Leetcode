class Solution {
public:
    int transform(int it) {
        if (it <= 9) {
            return it;
        }
        string s = to_string(it);
        sort(s.begin(), s.end(), greater<char>());
        int newNum = stoi(s);
        return newNum;
    }
    long long maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);
        vector<int> v;
        for(auto &it : nums){
            v.push_back(transform(it)-it);
        }
        sort(v.begin(), v.end(), greater<int>());
        for(int i = 0; i < k; i++){
            if(v[i] > 0){
                sum+= v[i];
            }
        }
        return sum;
    }
};