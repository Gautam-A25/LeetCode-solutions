class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        stack<pair<int,int>> st;

        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push({nums[i], i});
            }

            else if(st.top().first > nums[i]){
                st.push({nums[i], i});
            }
        }

        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && nums[i] >= st.top().first){
                int ind = st.top().second;
                ans = max(ans, i - ind);
                st.pop();
            }
        }

        return ans;
    }
};