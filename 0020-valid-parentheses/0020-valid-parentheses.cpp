class Solution {
public:
    bool isValid(string s) {
        // stack<int> s1,s2;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('||s[i]=='['||s[i]=='{'){
        //         s1.push(s[i]);
        //     }
        //     if(s[i]==')'||s[i]==']'||s[i]=='}'){
        //         s2.push(s[i]);
        //     }
        // }
        // if(s1.size()!=s2.size()) return false;
        // while(s1.empty() && s2.empty()){
        //     if(s1.top()==s2.top()){
        //         s1.pop();
        //         s2.pop();
        //         continue;
        //     }
        //     else if(s1.top()!=s2.top()){
        //         return false;
        //     }

        // }
        // return true;
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } 
            else {
                if (st.empty())
                    return false; 
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                    return false;
                }
            }
        }
        return st.empty(); // must be empty if valid
    }
};