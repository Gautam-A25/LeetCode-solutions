class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int pairAmt = 0;
        
        for(int i=0; i<n; i++){
            for(int j=i+1;j<n; j++ ){
                if(nums[i] + nums[j] < target){
                    pairAmt++;
                }
            }
        }

        return pairAmt;
    }
};