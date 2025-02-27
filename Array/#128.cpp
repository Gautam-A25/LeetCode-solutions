class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.empty()) return 0;
      unordered_set<int> numSet(nums.begin(), nums.end());  

      int maxLength = 0;
      for(int num: numSet){
        if(!numSet.count(num-1)){
            int length = 1;
            while(numSet.count(num+1)){
                num++;
                length++;
            }
            maxLength = max(maxLength, length);
        }
      }
      return maxLength;
    }
};