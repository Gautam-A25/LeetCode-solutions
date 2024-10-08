class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> num;

        for(int n: nums){
            if(num.count(n)>0){
                return true;
            }
            num.insert(n);
        }
        return false;
    }
};