class Solution {
public:
    int minOperations(string s1, string s2) {
        int n = s1.size();

        if (n == 1 && s1 == "1" && s2 == "0")
            return -1;

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (s1[i] == s2[i]) {
                continue;
            }

            // If current character is '0'
            if (s1[i] == '0') {
                cnt++;
                s1[i] = '1';
                continue;
            }

            // If current character is '1'
            if (i + 1 < n) {
                if (s1[i + 1] == '0') {
                    cnt++;
                    s1[i + 1] = '1';
                }

                cnt++;
                s1[i] = '0';
                s1[i + 1] = '0';
            } else {
                if (s1[i - 1] == '0') {
                    cnt++;
                    s1[i - 1] = '1';
                }

                cnt++;
                s1[i] = '0';
                s1[i - 1] = '0';

                if (s1[i - 1] != s2[i - 1]) {
                    s1[i - 1] = '1';
                    cnt++;
                }
            }
        }

        return cnt;
    }
};