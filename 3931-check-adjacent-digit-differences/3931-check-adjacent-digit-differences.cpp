class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        bool ans = true;
        int n = s.length();
        for(int i = 0; i < n-1; i++){
            if( abs((s[i] - '0') - (s[i+1] - '0'))  > 2){
                ans = false;
            }
        }
        return ans;
    }
};