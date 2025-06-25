class Solution {
public:
    string removeDuplicates(string s) {
        stack <int> st;
        for(char c: s){
            if(st.empty() || st.top()!=c) st.push(c);
            else if(st.top()==c) st.pop();
        }
        string result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};