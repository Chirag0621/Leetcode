class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> shift(s.length(),0);
        for(auto it : shifts){
            int l = it[0];
            int r = it[1];
            int dir = it[2];
            if(dir == 0){
                shift[l] -= 1;
                if(r+1 < s.length()) shift[r+1] += 1;
            }
            else{
                shift[l] += 1;
                if(r+1 < s.length()) shift[r+1] -= 1;
            }
        }
        for(int i = 1; i < shift.size(); i++){
            shift[i] += shift[i-1];
        }

        for(int i = 0; i < shift.size(); i++){
            char ch = s[i];
            ch = (ch - 'a' + shift[i]  % 26 + 26) % 26 + 'a';
            s[i] = ch;
        }
        return s;
    }
};