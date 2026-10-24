class Solution {
public:
    vector<int> generateRows(int r){
        int ans = 1;
        vector<int> temp;
        temp.push_back(1);
        for(int i = 1; i < r; i++){
            ans = ans*(r-i);
            ans = ans/i;
            temp.push_back(ans);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 1; i <= numRows; i++){
            res.push_back(generateRows(i));
        }
        return res;
    }
};