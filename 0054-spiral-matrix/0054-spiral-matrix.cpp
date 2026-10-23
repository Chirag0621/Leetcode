class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty() || matrix[0].empty())
            return ans;

        int m = matrix.size();

        int n = matrix[0].size();

        int srow = 0, scol = 0;
        int erow = m - 1, ecol = n - 1;
        while (srow <= erow && scol <= ecol) {
            // For Top Element
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }
            srow++;
            // For Right Element
            for (int j = srow; j <= erow; j++) {
                ans.push_back(matrix[j][ecol]);
            }
            ecol--;
            // For Bottom Element
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {

                    ans.push_back(matrix[erow][j]);
                }
                erow--;
            }
            // For Left Element
            if (scol <= ecol) {

                for (int j = erow ; j >=srow ; j--) {
                    ans.push_back(matrix[j][scol]);
                }
                scol++;
            }
        }
        return ans;
       

        
    }
};