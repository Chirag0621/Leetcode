class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int maxi= *max_element(nums.begin(),nums.end());
        int mini= *min_element(nums.begin(),nums.end());
        for(int i=mini;i<=maxi;i++){
            if( ! binary_search(nums.begin(),nums.end(),i) ){
                ans.push_back(i);
            }
        }
        return ans;
    }
};