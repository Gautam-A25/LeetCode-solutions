class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> map;

        for (int i = 1; i <= n; i++) {
            int sum = 0;
            int num = i;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            map[sum]++;
        }

        int maxCount = 0;
        for (const auto& entry : map) {
            maxCount = max(maxCount, entry.second);
        }
        int count = 0;
        for (const auto& entry : map) {
            if (entry.second == maxCount)
                count++;
        }
        return count;
    }
};
