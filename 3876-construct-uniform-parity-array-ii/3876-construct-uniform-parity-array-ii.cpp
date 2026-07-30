class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = *min_element(nums1.begin(), nums1.end());
        bool ans = true;
        
        int cntOdd = 0;
        for(auto it : nums1){
            if(it % 2 != 0) cntOdd++;
        }
        if( mini % 2 == 0 && cntOdd >= 1) ans = false;

      
        return ans;
        
    }
};