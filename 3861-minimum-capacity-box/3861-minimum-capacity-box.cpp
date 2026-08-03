class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minVal = INT_MAX;
        int idx = -1;
        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] >= itemSize){
                idx = i;
                minVal = min(minVal, capacity[i]);
            }
        }
        if(idx == -1) return -1;
        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] == minVal){
                idx = i;
                break;
            }
        }
        return idx;
    }
};