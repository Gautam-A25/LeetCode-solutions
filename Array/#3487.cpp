class Solution {
public:
    int maxSum(vector<int>& nums) {
        if(0 > *max_element(nums.begin(), nums.end())) return *max_element(nums.begin(), nums.end());
        unordered_set<int> seen;
        int maxSum = 0;
        for(int i: nums){
            if(seen.count(i) || i<0) continue;
            else{
                seen.insert(i);
                maxSum += i;
            }
        }
        return maxSum;
    }
};