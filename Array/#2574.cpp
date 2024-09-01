class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 0);

        for(int i = 0; i<n; i++){
            int leftSum = 0, rightSum = 0;
            for(int j = i+1; j<n; j++){
                rightSum += nums[j];
            }
            for(int k = i-1; k>=0; k--){
                leftSum += nums[k];
            }
            answer[i] = abs(leftSum - rightSum);
        }

        return answer;
    }
};