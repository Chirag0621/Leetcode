class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto it : nums){
            if(mp[it] < k) mp[it]++;
        }
        vector<int> res;
        for(auto it : mp){
            while(it.second){
                res.push_back(it.first);
                it.second--;
            }
        }
        sort(res.begin(), res.end());
        return res;
        
    }
};