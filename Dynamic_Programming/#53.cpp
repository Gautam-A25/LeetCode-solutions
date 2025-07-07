class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = nums[0], current = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int lastNum = nums[i];
            int combined = current + lastNum;
            current = max(combined, lastNum);
            best = max(best, current);
        }                 
        return best;
    }
};