class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // Brute Approach
        //  To take an extra auxilary array
        // T.C: O(n) & S.C: O(n)

        // Better Approach

        // int insertPosition=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         nums[insertPosition]=nums[i];
        //         insertPosition++;
        //     }
        // }
        // while(insertPosition<nums.size()){
        //     nums[insertPosition++]=0;
        // }

        // T.C: O(n)+O(cntofZeroes) & S.C: O(1);

        // Optimal Approach: Two Pointers

        int n = nums.size();
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                if (i != j) {
                    swap(nums[i], nums[j]);
                }
                j++;
            }
        }

        // T.C: O(n)
        // S.C: O(1)
    }
};