class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> res;
        for(auto it : matrix){
            int cnt1 = 0;
            for(int i = 0; i < it.size(); i++){
                if(it[i] == 1) cnt1++;
            }
            res.push_back(cnt1);
        }
        return res;
    }
};