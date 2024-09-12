class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, bool> mp;
        int result = 0;
        for(char c: allowed){
            mp[c] = true; 
        }
        for(int i = 0; i < words.size(); i++) {
            bool isConsistent = true;
            for(int j = 0; j < words[i].size(); j++) {
                if(mp.find(words[i][j]) == mp.end()) {
                    isConsistent = false;
                    break;
                }
            }
            if(isConsistent) {
                result++;
            }
        }
        return result;
    }
};