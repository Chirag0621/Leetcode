class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> diff(50,0);
        for(auto it : ranges){
            diff[it[0]-1] += 1;
            if(it[1] < 50) diff[it[1]] -= 1; 
        }
        for(int i =1;i < 50; i++){
            diff[i] += diff[i-1];
        }

        for(int i = left-1; i < right; i++){
            if(diff[i] <= 0){
                return false;
            }
        }
        return true;
    }
};