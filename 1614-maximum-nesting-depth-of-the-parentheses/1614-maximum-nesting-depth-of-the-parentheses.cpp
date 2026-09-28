class Solution {
public:
    int maxDepth(string s) {
        int currDepth=0;
        int maxiDepth=0;
        for(char c: s){
            if(c=='('){
                currDepth+=1;
                maxiDepth=max(maxiDepth,currDepth);
            }
            else if(c==')'){
                currDepth--;
            }
        }
        return maxiDepth;
    }
};