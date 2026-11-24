class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> result(n,0);
        for(auto it : bookings){
            int l = it[0] - 1;
            int r = it[1] - 1;
            int seat = it[2];

            result[l] += seat;
            if(r+1 < n) result[r+1] -= seat;
        }
        for(int i = 1; i < n; i++){
            result[i] += result[i-1];
        }
        return result;
    }
};