class Solution {
public:
    int maximumWidth(vector<int>& planks) {
        unordered_map<int, int> ans;
        for(int p : planks){
            ans[p]++;
        }
        vector<pair<int, int>> keys(ans.begin(), ans.end());
        int n = keys.size();
        for(int i = 0; i < n; i++){
            ans[2*keys[i].first] += keys[i].second/2;
            for(int j = i+1; j < n; j++){
                ans[keys[i].first + keys[j].first] += min(keys[i].second, keys[j].second); 
            }
        }
        int maxWidth=0;
        for(auto it : ans){
            maxWidth = max(maxWidth,it.second);
        }
        return maxWidth;
    }
};