class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1Count(26,0), s2Count(26,0);
        for(char c : s1){
            s1Count[c - 'a']++;
        }
        int n = s1.size(), m = s2.size();
        if(n>m) return false;

        for(int i = 0; i<n; i++){
            s2Count[s2[i] - 'a']++;
        }

        if(s1Count == s2Count) return true;

        for(int i = n; i<m; i++){
            s2Count[s2[i] - 'a']++;
            s2Count[s2[i-n] - 'a']--;
            if(s1Count == s2Count) return true;
        }

        return false;
    }
};