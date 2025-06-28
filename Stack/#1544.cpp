class Solution {
    public:
        string makeGood(string s) {
            stack<int> st;
            string ans = "";
            for(char c: s){
                if(!st.empty() && abs(c - st.top()) == 32){
                    st.pop();
                }
                else st.push(c);
            }
            if(st.size() == 0) return ans;
            else{
                while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }
                reverse(ans.begin(), ans.end());
                return ans;
            }
        }
    };