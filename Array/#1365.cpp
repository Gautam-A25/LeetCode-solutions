class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int n = nums.size();
       vector<int> answer(n, 0);
       for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j != i && nums[j]<nums[i]){
                answer[i]++;
            }
        }
       }
       return answer; 
    }
};