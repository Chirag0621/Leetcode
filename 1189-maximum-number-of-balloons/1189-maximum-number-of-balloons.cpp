class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        int n = text.size();
        for(int i = 0; i < n; i++){
            if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n'){
                mp[text[i]]++;
            }
        }

        int min1 = min(mp['b'], min(mp['a'], mp['n']));
        int min2 = min((mp['l']/2), (mp['o']/2));
        int res = min(min1, min2);

        return res;
    }
};