class Solution {
public:
    void generateString(string &s, int idx, int cost, int n, int k,
                        vector<string> &res) {
        if (idx == n) {
            if (cost <= k)
                res.push_back(s);
            return;
        }

        
        s.push_back('0');
        generateString(s, idx + 1, cost, n, k, res);
        s.pop_back();

        
        if (s.empty() || s.back() == '0') {
            s.push_back('1');
            generateString(s, idx + 1, cost + idx, n, k, res);
            s.pop_back();
        }
    }

    vector<string> generateValidStrings(int n, int k) {
        vector<string> res;
        string s;

        generateString(s, 0, 0, n, k, res);

        return res;
    }
};