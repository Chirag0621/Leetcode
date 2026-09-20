class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int m = intervals[0].size();
        sort(intervals.begin(), intervals.end());
        int cnt = 0; 
        for(int i = 0; i < n -1; i++){
            int end = intervals[i][1];
            for(int j = i+1; j < n; j++ ){
                if(end >= intervals[j][0]){
                    cnt++;
                }
                else{
                    break;
                }
            
            }
        }
        return cnt;
        
    }
};