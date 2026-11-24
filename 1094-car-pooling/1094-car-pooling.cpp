class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1001,0);
        for(auto it : trips){
            int start = it[1];
            int end = it[2];
            int passenger = it[0];

            diff[start] += passenger;
            diff[end] -= passenger;

        }
        int curr = 0;
        for(auto it : diff){
            curr += it;
            if(curr > capacity){
                return false;
            }
        }
        return true;
    }
};