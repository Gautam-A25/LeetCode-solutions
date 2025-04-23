class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        int start = 0;
        
        while(k>0){
            for(int i = 0; i < k; i++ ){
                swap(nums[start+i], nums[start+n-k+i]);
            }
            start += k;
            n -= k;
            k %= n;
        }
    }
};