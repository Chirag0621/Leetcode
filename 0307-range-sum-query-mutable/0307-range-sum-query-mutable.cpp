class NumArray {
public:
    vector<int> prefixsum;
    vector<int> array; 
    NumArray(vector<int>& nums) {
        array = nums; 
        for(int i = 1; i < nums.size(); i++){
            nums[i] += nums[i-1];
        }
        this->prefixsum = nums;
    }
    
    void update(int index, int val) {
        
        int diff = val - array[index];
        
        array[index] = val;
        
        
        for(int i = index; i < prefixsum.size(); i++) {
            prefixsum[i] += diff;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return prefixsum[right];
        }
        else {
            return prefixsum[right] - prefixsum[left -1];
        }
    }
};
