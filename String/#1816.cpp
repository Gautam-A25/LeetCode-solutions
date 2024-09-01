class Solution {
public:
    string truncateSentence(string s, int k) {
        string result;
        int count=0;
        for(char c: s){
            if(c==' ') count++;
            
            if(count!=k) result+=c;
            else if(count==k) break;
        }
        return result;
    }
};