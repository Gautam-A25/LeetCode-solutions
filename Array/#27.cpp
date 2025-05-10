class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            if(nums.size() == 1 && nums[0] == val) return 0;
            int i = 0, j = nums.size() - 1;
            for(; i <= j; i++){
                while(nums[j] == val && j>i){
                        j--;
                    }
                if(nums[i] == val) {
                    swap(nums[i], nums[j]);
                    j--;
                }
            }
            return j+1;
        }
    };