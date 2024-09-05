class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = 0, r = rolls.size();
        for(int i=0; i<r; i++){
            m+=rolls[i];
        }
        int diceSum = mean * (n+r);
        int missingSum = diceSum - m;

        if (missingSum < n || missingSum > 6 * n) {
            return {};
        }
        
        vector<int> result(n, missingSum / n);

        int remainder = missingSum % n;
        for (int i = 0; i < remainder; i++) {
            result[i]++;
        }
        return result;
    }
};