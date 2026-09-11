class Solution {
public:
    set<int> st;
    void solve(vector<int>& digits, vector<bool>& used, int num, int len){
        //Base Case
        if(len == 3){
            if(num % 2 == 0){
                st.insert(num);
            }
            return;
        }
        for(int i=0; i < digits.size(); i++){
            if(used[i]) continue;

            if(len == 0 && digits[i] == 0) continue;

            used[i] = true;

            solve(digits, used, num * 10 + digits[i], len + 1);

            used[i] = false;

        }
    }
    int totalNumbers(vector<int>& digits) {
        vector<bool> used(digits.size(), false);
        solve(digits, used, 0, 0);

        return st.size();
    }
};