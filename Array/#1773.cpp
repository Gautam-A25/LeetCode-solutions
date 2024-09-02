class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int keyIdx = 0, count = 0;
        if (ruleKey == "type") {
            keyIdx = 0;
        } else if (ruleKey == "color") {
            keyIdx = 1;
        } else if (ruleKey == "name") {
            keyIdx = 2;
        }
        for(int i=0; i<items.size(); i++){
            if(ruleValue==items[i][keyIdx]) count++;
        }
        return count;
    }
};