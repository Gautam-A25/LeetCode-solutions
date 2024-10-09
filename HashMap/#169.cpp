class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> numMap;

        for (int num : nums) {
            numMap[num]++;
        }

        int maxCount = 0, majorityElem = 0;

        for(const auto& pair : numMap){
            if(pair.second>maxCount){
                maxCount = pair.second;
                majorityElem = pair.first;
            }
        }
        return majorityElem;
    }
};