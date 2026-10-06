class Solution {
public:
    int minAddToMakeValid(string s) {
        // //Brute
        // stack<char> st;
        // int unmatched = 0;
        // for (int i = 0; i < s.length(); i++) {
        //     if (s[i] == '(') {
        //         st.push('(');
        //     } else {
        //         if (!st.empty() && st.top() == '(') {
        //             st.pop();
        //         } else {
        //             unmatched++;
        //         }
        //     }
        // }
        // return st.size() + unmatched;
        
        //Optimal
        int ob = 0;
        int cb = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                ob++;
            }
            else{
                if(ob > 0){
                    ob--;
                }
                else{
                    cb++;
                }
            }
        }
        return ob + cb;
    }
};