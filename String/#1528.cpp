class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int, char>> code;
        string result;

        for(int i=0; i<indices.size(); i++){
            code.push_back({indices[i], s[i]});
        }
        sort(code.begin(), code.end());

        for(int i=0; i<s.size(); i++){
            result += code[i].second;
        }
        return result;
    }
};