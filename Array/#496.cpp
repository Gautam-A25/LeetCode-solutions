class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            vector<int> ans;
            for(int i = 0; i< nums1.size(); i++){
                int index;
                for(int j = 0; j<nums2.size(); j++){
                    if(nums1[i] == nums2[j]){
                        index = j;
                        break;
                    }
                }
                while(nums2[index]<=nums1[i] && index != nums2.size()-1){
                    index++;
                }
                if(nums1[i]<nums2[index]) ans.push_back(nums2[index]);
                else ans.push_back(-1);
            }
            return ans;
        }
    };