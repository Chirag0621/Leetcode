class Solution {
public:
    long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> start(n), end(n);
        for(int i = 0; i < n; i++){
            start[i] = intervals[i][0];
            end[i] = intervals[i][1];
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        long ans = 0;
        int j = 0;
        for(int i = 0; i < n; i++){
            while(start[i] > end[j]){
                j++;
            }
            ans += i - j;
        }
        return ans;
        
    }
};