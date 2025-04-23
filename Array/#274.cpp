class Solution {
public:
    int hIndex(vector<int>& cit) {
        sort(cit.begin(), cit.end());
        int H = 0, n = cit.size();
        for (int i = 0; i < n; i++) {
            if (cit[i] - (n - i) >= 0)
                H = max(H, n - i);
        }
        return H;
    }
};