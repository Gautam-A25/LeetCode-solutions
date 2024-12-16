class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> minHeap;

        for(int i =0; i< nums.size(); i++){
            minHeap.push({nums[i], i});
        }

        for(int op=0; op < k; op++){
            auto[value, index] = minHeap.top();
            minHeap.pop();

            nums[index] = value * multiplier;

            minHeap.push({nums[index], index});
        }
        return nums;
    }
};