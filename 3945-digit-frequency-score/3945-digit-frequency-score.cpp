class Solution {
public:
    int digitFrequencyScore(int n) {
        int num = n;
        unordered_map<int, int> mp;
        while(num > 0){
            int dig = num % 10;
            num = num / 10;
            mp[dig]++;
        }

       
        int sum = 0;
        for(auto it : mp){
            sum += it.first * it.second;
        }
        return sum;
    }
};