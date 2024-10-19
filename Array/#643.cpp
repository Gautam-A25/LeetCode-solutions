class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0;

        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        double maxAvg = static_cast<double>(sum)/k;

        for(int i = k; i<nums.size(); i++){
            sum = sum - nums[i-k] + nums[i];
            maxAvg = max(maxAvg, static_cast<double>(sum)/k);
        }

        return maxAvg;
    }
};