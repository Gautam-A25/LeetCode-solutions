class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int idx1 = 0, idx2 = 0;
        int len1 = word1.size(), len2 = word2.size();

        while (idx1 < len1 || idx2 < len2) {
            if (idx1 < len1) {
                ans.push_back(word1[idx1]);
                idx1++;
            }
            if (idx2 < len2) {
                ans.push_back(word2[idx2]);
                idx2++;
            }
        }
        return ans;
    }
};
