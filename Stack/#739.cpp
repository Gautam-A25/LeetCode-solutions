class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> stack;
        stack.push(0);
        int n = t.size();
        vector<int> ans(n);
        for(int i = 1; i<n; i++){
            int x = t[i];
            while(!stack.empty() and t[stack.top()] < x){
                ans[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }
        while(!stack.empty()){
            ans[stack.top()] = 0;
            stack.pop();
        }
        return ans;
    }
};