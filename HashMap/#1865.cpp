class FindSumPairs {
private:
    vector<int> arr1, arr2;
    unordered_map<int, int> map;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        arr1 = nums1;
        arr2 = nums2;
        for(int x : arr2){
            map[x]++;
        }    
    }
    
    void add(int index, int val) {
        map[arr2[index]]--;
        arr2[index] += val;
        map[arr2[index]]++;   
    }
    
    int count(int tot) {
        int c = 0;
        for (int x : arr1) {
            c += map[tot - x];
        }
        return c;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */