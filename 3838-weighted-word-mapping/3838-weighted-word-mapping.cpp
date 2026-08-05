class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<char> v;

        for (char ch = 'z'; ch >= 'a'; ch--) {
            v.push_back(ch);
        }
        string res = "";
        int n = words.size();
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(char ch : words[i]){
                sum += weights[ch - 'a'];
            }
            sum = sum % 26;
            res += v[sum];
        }
        return res;
    }
};