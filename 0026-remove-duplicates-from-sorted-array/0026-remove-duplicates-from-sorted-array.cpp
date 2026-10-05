class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int  i=0,j=1;
        // while(j<nums.size()){
        //     if(nums[i]!=nums[j]){
        //         i++;
        //         nums[i]=nums[j];
        //     }
        //     j++;
        // }
        // return i+1;
        set<int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        copy(st.begin(), st.end(), nums.begin());
        return st.size();
        
    }
};