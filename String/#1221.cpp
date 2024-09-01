class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0, maxCount = 0;
        for(char c: s){
            if(c=='R') balance++;
            else if(c=='L') balance--;

            if(balance==0) maxCount++;
        }
        return maxCount;
    }
};