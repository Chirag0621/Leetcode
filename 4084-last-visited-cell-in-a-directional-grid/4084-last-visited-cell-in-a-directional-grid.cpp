class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int srow = 0;
        int scol = 0;
        vis[srow][scol] = 1;
        while (true) {
            int prevrow = srow;
            int prevcol = scol;
            if (grid[srow][scol] == 'R') {
                scol++;
                if (scol < 0 || scol >= m) {
                    scol--;
                    return {prevrow, prevcol};
                }
            } else if (grid[srow][scol] == 'L') {
                scol--;
                if (scol < 0 || scol >= m) {
                    scol++;
                    return {prevrow, prevcol};
                }
            } else if (grid[srow][scol] == 'U') {
                srow--;
                if (srow < 0 || srow >= n) {
                    srow++;
                    return {prevrow, prevcol};
                }
            } else {
                srow++;
                if (srow < 0 || srow >= n) {
                    srow--;
                    return {prevrow, prevcol};
                }
            }
            if (vis[srow][scol]) {
                return {prevrow, prevcol};
            }
            vis[srow][scol] = 1;
        }

        return {srow, scol};
    }
};